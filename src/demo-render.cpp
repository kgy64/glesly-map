/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Project:     Glesly: my GLES-based rendering library
 * Purpose:     My demo class for map rendering
 * Author:      György Kövesdi (kgy@teledigit.eu)
 * Licence:     GPL (see file 'COPYING' in the project root for more details)
 * Comments:    
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <objects/glesly-mesh.h>

#include "demo-render.h"

using namespace Ducktor;

DemoRender_1::DemoRender_1(Glesly::Render3D::RenderInfo & renderInfo):
    SurfaceRender(renderInfo)
{
 SYS_DEBUG_MEMBER(DM_GLESLY);

 CameraSetNearPlane(1.0e2);
 CameraSetFarPlane(7.0e5);
}

DemoRender_1::~DemoRender_1()
{
 SYS_DEBUG_MEMBER(DM_GLESLY);
}

void DemoRender_1::Initialize(void)
{
 SYS_DEBUG_MEMBER(DM_GLESLY);

 Glesly::ObjectList objs = GetObjectList();

 objs.Insert(DucktorMesh::Create(*this, 20)); // Budapest
}

void DemoRender_1::Frame(const SYS::TimeDelay & frame_start_time)
{
 SYS_DEBUG_MEMBER(DM_GLESLY);
}

void DemoRender_1::AfterFrame(void)
{
 SYS_DEBUG_MEMBER(DM_GLESLY);

 glClear(GL_DEPTH_BUFFER_BIT);
}

DemoRender_2::DemoRender_2(Glesly::Render3D::RenderInfo & renderInfo):
    SurfaceRender(renderInfo)
{
 SYS_DEBUG_MEMBER(DM_GLESLY);

 CameraSetNearPlane(4.0e3);
 CameraSetFarPlane(4.0e7);
}

DemoRender_2::~DemoRender_2()
{
 SYS_DEBUG_MEMBER(DM_GLESLY);
}

void DemoRender_2::Initialize(void)
{
 SYS_DEBUG_MEMBER(DM_GLESLY);

 Glesly::ObjectList objs = GetObjectList();

 objs.Insert(DucktorMesh::Create(*this, 21)); // Hungary
}

void DemoRender_2::Frame(const SYS::TimeDelay & frame_start_time)
{
 SYS_DEBUG_MEMBER(DM_GLESLY);
}

void DemoRender_2::AfterFrame(void)
{
 SYS_DEBUG_MEMBER(DM_GLESLY);

 glClear(GL_DEPTH_BUFFER_BIT);
}

/* * * * * * * * * * * * * End - of - File * * * * * * * * * * * * * * */
