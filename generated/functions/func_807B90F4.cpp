#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B90F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807B90F4;

loc_807B90F4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r6 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r7 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 25248));
    r8 = (r1 + 8);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r31 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r1 + 24), f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r1 + 20), f4.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r7));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r1 + 8), f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r1 + 12), f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r8));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(PPC_PsFromScalarInline(f3.d), PPC_PsFromScalarInline(f3.d), f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r1 + 16), f2.d);
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f0.d, f4.d, f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r1 + 28), f3.d);
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(PPC_PsFromScalarInline(f2.d), PPC_PsFromScalarInline(f2.d), f1.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f2.d, f1.d, f1.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f2.d), PPC_PsToScalarInline(f0.d));
}

loc_807B917C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B91CC;
    }
}

loc_807B9180:
{
    r5 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(255));
}

loc_807B918C:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B91C4;
    }
}

loc_807B9198:
{
    r3 = 0x809C0000u;
    r4 = r5;
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 12), f2.d);
}

loc_807B91C4:
{
    r3 = 1;
    goto loc_807B91D0;
}

loc_807B91CC:
{
    r3 = 0;
}

loc_807B91D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003B gpr_write=0x800001FB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807B90F4 func_807B90F4 preserves=true fpr_mask=0x00000000
