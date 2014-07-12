/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Project:     Glesly: my GLES-based rendering library
 * Purpose:     My test class for map rendering
 * Author:      György Kövesdi (kgy@teledigit.eu)
 * Licence:     GPL (see file 'COPYING' in the project root for more details)
 * Comments:    
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <objects/glesly-mesh.h>
#include <objects/glesly-poi-3d.h>
#include <objects/glesly-house.h>

#include "map-render.h"

using namespace Ducktor;

MapRender::MapRender(Glesly::Render3D::RenderInfo & renderInfo):
    SurfaceRender(renderInfo)
{
 SYS_DEBUG_MEMBER(DM_GLESLY);

 CameraSetNearPlane(20);
 CameraSetFarPlane(1.0e5);
}

MapRender::~MapRender()
{
 SYS_DEBUG_MEMBER(DM_GLESLY);
}

void MapRender::Initialize(void)
{
 SYS_DEBUG_MEMBER(DM_GLESLY);

 Glesly::ObjectList objs = GetObjectList();

 for (int i = 0; i < 20; ++i) {
    objs.Insert(DucktorMesh::Create(*this, i));
 }

 for (int i = 0; i < 5; ++i) {
    objs.Insert(MyPoi3D::Create(*this, i));
 }

 for (int i = 0; i < 28; ++i) {
    objs.Insert(MyHouse::Create(*this, i));
 }
}

void MapRender::Frame(const SYS::TimeDelay & frame_start_time)
{
 SYS_DEBUG_MEMBER(DM_GLESLY);
}

/* * * * * * * * * * * * * End - of - File * * * * * * * * * * * * * * */
