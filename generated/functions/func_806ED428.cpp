#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806ED428(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806ED428;

loc_806ED428:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_806ED42C:
{
    r7 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806ED490;
    }
}

loc_806ED434:
{
    r0 = MemoryInline::FlatRead16((r3 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_806ED43C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r4))) {
        goto loc_806ED450;
    }
}

loc_806ED440:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r5));
}

loc_806ED444:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806ED450;
    }
}

loc_806ED448:
{
    r7 = 1;
    goto loc_806ED534;
}

loc_806ED450:
{
}

loc_806ED454:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_806ED470;
    }
}

loc_806ED458:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_806ED460:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806ED534;
    }
}

loc_806ED468:
{
    r7 = 1;
    goto loc_806ED534;
}

loc_806ED470:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r5));
}

loc_806ED474:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806ED534;
    }
}

loc_806ED478:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_806ED480:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806ED534;
    }
}

loc_806ED488:
{
    r7 = 1;
    goto loc_806ED534;
}

loc_806ED490:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806ED504;
    }
}

loc_806ED494:
{
    r6 = MemoryInline::FlatRead16((r3 + 70));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
}

loc_806ED49C:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(r4))) {
        goto loc_806ED4AC;
    }
}

loc_806ED4A0:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_806ED4A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806ED4BC;
    }
}

loc_806ED4AC:
{
}

loc_806ED4B0:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_806ED4C4;
    }
}

loc_806ED4B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r5));
}

loc_806ED4B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806ED4C4;
    }
}

loc_806ED4BC:
{
    r7 = 1;
    goto loc_806ED534;
}

loc_806ED4C4:
{
}

loc_806ED4C8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r4))) {
        goto loc_806ED4E4;
    }
}

loc_806ED4CC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_806ED4D4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806ED534;
    }
}

loc_806ED4DC:
{
    r7 = 1;
    goto loc_806ED534;
}

loc_806ED4E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r5));
}

loc_806ED4E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806ED534;
    }
}

loc_806ED4EC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_806ED4F4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806ED534;
    }
}

loc_806ED4FC:
{
    r7 = 1;
    goto loc_806ED534;
}

loc_806ED504:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806ED534;
    }
}

loc_806ED508:
{
    r0 = MemoryInline::FlatRead16((r3 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_806ED510:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806ED534;
    }
}

loc_806ED514:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_806ED51C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806ED534;
    }
}

loc_806ED524:
{
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_806ED528:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806ED534;
    }
}

loc_806ED530:
{
    r7 = 1;
}

loc_806ED534:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000C9 gpr_return=0x00000008 fpr_read=0x00000007 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806ED428 func_806ED428 preserves=true fpr_mask=0x00000000
