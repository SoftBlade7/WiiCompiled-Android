#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053520C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8053520C;

loc_8053520C:
{
    r3 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r3 + -10520));
    r3 = MemoryInline::FlatRead32((r6 + 32));
}

loc_8053521C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80535228;
    }
}

loc_80535220:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_8053522C;
}

loc_80535228:
{
    r3 = 0;
}

loc_8053522C:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_80535238:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80535260;
    }
}

loc_8053523C:
{
    r3 = MemoryInline::FlatRead32((r6 + 28));
}

loc_80535244:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80535250;
    }
}

loc_80535248:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80535254;
}

loc_80535250:
{
    r3 = 0;
}

loc_80535254:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_80535260:
{
}

loc_80535264:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80535274;
    }
}

loc_80535268:
{
    r3 = MemoryInline::FlatRead32((r6 + 32));
    r0 = MemoryInline::FlatRead8((r3 + 12));
    goto loc_80535278;
}

loc_80535274:
{
    r0 = -1;
}

loc_80535278:
{
    r3 = MemoryInline::FlatRead32(r5);
    r7 = (r0 & 255);
    r6 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead8((r3 + 17));
    r3 = MemoryInline::FlatRead8((r4 + 28));
    r5 = MemoryInline::FlatRead8((r5 + 28));
    r6 = MemoryInline::FlatRead8((r6 + 17));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
}

loc_80535298:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805352AC;
    }
}

loc_805352A4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_805352AC:
{
}

loc_805352B0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_805352C8;
    }
}

loc_805352B4:
{
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_805352BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805352C8;
    }
}

loc_805352C0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_805352C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(-1));
}

loc_805352CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805352FC;
    }
}

loc_805352D0:
{
    r0 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_805352D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805352E4;
    }
}

loc_805352DC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_805352E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_805352E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805352FC;
    }
}

loc_805352EC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r7));
}

loc_805352F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805352FC;
    }
}

loc_805352F4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_805352FC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8053520C func_8053520C preserves=true fpr_mask=0x00000000
