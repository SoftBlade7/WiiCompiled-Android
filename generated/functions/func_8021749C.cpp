#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021749C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8021749C;

loc_8021749C:
{
    r5 = MemoryInline::FlatRead8((r3 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -25792));
    r0 = (r5 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802174A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80217580;
    }
}

loc_802174AC:
{
    r0 = (r5 & 1);
}

loc_802174B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80217528;
    }
}

loc_802174B4:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802174F0;
    }
}

loc_802174CC:
{
    r0 = (r5 & 16);
}

loc_802174D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802174E0;
    }
}

loc_802174D4:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_802174FC;
}

loc_802174E0:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    goto loc_802174FC;
}

loc_802174F0:
{
}

loc_802174F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(42))) {
        goto loc_802174FC;
    }
}

loc_802174F8:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -25784));
}

loc_802174FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80217504:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80217508:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80217510:
{
    MemoryInline::FlatWrite32((r3 + 12), r0);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_80217518:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80217528:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -25784));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80217540:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80217554;
    }
}

loc_80217548:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25792));
    f1.d = f2.d;
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
}

loc_80217554:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8021755C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80217560:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80217568:
{
    MemoryInline::FlatWrite32((r3 + 12), r0);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_80217570:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_80217580:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -25780));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003D gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021749C func_8021749C preserves=true fpr_mask=0x00000000
