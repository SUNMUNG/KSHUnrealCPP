// Fill out your copyright notice in the Description page of Project Settings.


#include "Maze/MazeActor.h"
#include "Maze/CellActor.h"
#include "Maze/MazeData.h"
#include "NavigationSystem.h"
#include "NavMesh/NavMeshBoundsVolume.h"
// Sets default values
AMazeActor::AMazeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AMazeActor::BeginPlay()
{
	Super::BeginPlay();

	OnPreMapGenerate();

	FMazeData* maze = MakeMaze();
	MakeMaze();
	SpawnCells(maze);
	ClearMaze(maze);

	OnPostMapGenerate();
}

void AMazeActor::OnPreMapGenerate()
{
	UNavigationSystemV1* navSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());

	if (navSystem) {
		navSystem->SetNavigationAutoUpdateEnabled(false, navSystem);
	}
}

void AMazeActor::OnPostMapGenerate()
{
	UNavigationSystemV1* navSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());

	if (navSystem) {
		
		//navSystem->SetNavigationAutoUpdateEnabled(true, navSystem);
		navSystem->Build();
	}
}

FMazeData* AMazeActor::MakeMaze()
{
	FMazeData* maze = new FMazeData();
	maze->MakeMaze(Width, Height, RandomSeed);

	return maze;
}
void AMazeActor::SpawnCells(class FMazeData*& Maze)
{
	if (CellActorClass) {
		const ACellActor* DefaultCell = CellActorClass->GetDefaultObject<ACellActor>();
		float cellHalfSize = DefaultCell->GetCellHalfSize();
		float cellSize = cellHalfSize * 2.0f;

		FVector startLocation = FVector(Height * cellHalfSize, -Width * cellHalfSize, 0.0f)
			+ FVector((Height % 2) * -cellHalfSize, (Width % 2) * cellHalfSize, 0.0f);

		int32 startX = static_cast<int32>(startLocation.X) / cellSize;
		int32 startY = static_cast<int32>(startLocation.Y) / cellSize;

		UWorld* world = GetWorld();
		for (uint8 y = 0; y < Height; y++) {
			for (uint8 x = 0; x < Width; x++) {
				FCellData* cell = Maze->GetCell(x, y);
				if (cell) {
					FVector cellLocation = startLocation + FVector(-y * cellSize, x * cellSize, 0.0f);
					ACellActor* cellActor = world->SpawnActor<ACellActor>(
						CellActorClass,
						cellLocation,
						FRotator::ZeroRotator
					);
					if (cellActor) {
						cellActor->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
						cellActor->InitializeCell(cell);
					}
				}
			}
		}
	}
}
void AMazeActor::ClearMaze(FMazeData*& Maze)
{
	delete Maze;
	Maze = nullptr;
}