#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006A2B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8006A2B0;

loc_8006A2B0:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8006A2B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8006A2BC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 44u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
}

loc_8006A2C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8006A2DC;
    }
}

loc_8006A2C8:
{
}

loc_8006A2CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8006A3B4;
    }
}

loc_8006A2D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8006A2D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A434;
    }
}

loc_8006A2D8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_8006A2DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006A2E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A368;
    }
}

loc_8006A2E8:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 128));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8006A2F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006A31C;
    }
}

loc_8006A2FC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 132));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8006A308:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006A31C;
    }
}

loc_8006A30C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8006A318:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A320;
    }
}

loc_8006A31C:
{
    r0 = 1;
}

loc_8006A320:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006A324:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006A368;
    }
}

loc_8006A328:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8006A338:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006A35C;
    }
}

loc_8006A33C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8006A348:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006A35C;
    }
}

loc_8006A34C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 148));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8006A358:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A360;
    }
}

loc_8006A35C:
{
    r0 = 1;
}

loc_8006A360:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006A364:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8006A368:
{
    r0 = MemoryInline::FlatRead32((r3 + 112));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    r0 = (r0 & -8);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 112), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    r0 = (r0 & -9);
    MemoryInline::FlatWriteFloat32((r3 + 128), f2.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 132), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    MemoryInline::FlatWriteFloat32((r3 + 136), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    MemoryInline::FlatWriteFloat32((r3 + 140), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 144), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 148), f0.d);
    MemoryInline::FlatWrite32((r3 + 112), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_8006A3B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006A3BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A400;
    }
}

loc_8006A3C0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 28));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8006A3D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006A3F4;
    }
}

loc_8006A3D4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 156));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8006A3E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006A3F4;
    }
}

loc_8006A3E4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 160));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8006A3F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A3F8;
    }
}

loc_8006A3F4:
{
    r0 = 1;
}

loc_8006A3F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006A3FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8006A400:
{
    r0 = MemoryInline::FlatRead32((r3 + 112));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 28));
    r0 = (r0 & -8);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 32));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 112), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
    r0 = (r0 & -9);
    MemoryInline::FlatWriteFloat32((r3 + 152), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 156), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 160), f0.d);
    MemoryInline::FlatWrite32((r3 + 112), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_8006A434:
{
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006A43C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A490;
    }
}

loc_8006A440:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 140));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8006A450:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006A474;
    }
}

loc_8006A454:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8006A460:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006A474;
    }
}

loc_8006A464:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 148));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8006A470:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A478;
    }
}

loc_8006A474:
{
    r0 = 1;
}

loc_8006A478:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006A47C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006A490;
    }
}

loc_8006A480:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 164));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8006A48C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8006A490:
{
    r0 = MemoryInline::FlatRead32((r3 + 112));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    r0 = (r0 & -8);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r3 + 112), r0);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    r0 = (r0 & -9);
    MemoryInline::FlatWriteFloat32((r3 + 140), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
    MemoryInline::FlatWriteFloat32((r3 + 144), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 148), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 164), f0.d);
    MemoryInline::FlatWrite32((r3 + 112), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006A2B0 func_8006A2B0 preserves=true fpr_mask=0x00000000
