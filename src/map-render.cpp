/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 * Project:     Glesly: my GLES-based rendering library
 * Purpose:     My test class for map rendering
 * Author:      György Kövesdi (kgy@teledigit.eu)
 * Licence:     GPL (see file 'COPYING' in the project root for more details)
 * Comments:    
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "map-render.h"

using namespace Ducktor;

MapRender::MapRender(Glesly::Render3D::RenderInfo & renderInfo):
    SurfaceRender(renderInfo)
{
 SYS_DEBUG_MEMBER(DM_GLESLY);
}

MapRender::~MapRender()
{
 SYS_DEBUG_MEMBER(DM_GLESLY);
}

void MapRender::Initialize(void)
{
 SYS_DEBUG_MEMBER(DM_GLESLY);
}

void MapRender::Frame(const SYS::TimeDelay & frame_start_time)
{
 SYS_DEBUG_MEMBER(DM_GLESLY);
}

/* * * * * * * * * * * * * End - of - File * * * * * * * * * * * * * * */
