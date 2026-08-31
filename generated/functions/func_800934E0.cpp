#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800934E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800934E0;

loc_800934E0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 20u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -28536), 0, 16u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28532));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    SetCRFloatResident(cr, 0, f1.d, f5.d);
}

loc_80093500:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 24), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 28), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80093534;
    }
}

loc_80093530:
{
    goto loc_80093538;
}

loc_80093534:
{
    f5.d = f1.d;
}

loc_80093538:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 100));
    SetCRFloatResident(cr, 0, f5.d, f0.d);
}

loc_80093540:
{
    r0 = cr;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWriteFloat32((r3 + 100), f5.d);
    r30 = (r0 ^ 1);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8009355C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80093564;
    }
}

loc_80093560:
{
    goto loc_80093578;
}

loc_80093564:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28532));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8009356C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80093574;
    }
}

loc_80093570:
{
    goto loc_80093578;
}

loc_80093574:
{
    f1.d = f0.d;
}

loc_80093578:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -28528));
    MemoryInline::FlatWriteFloat32((r3 + 104), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80093588:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80093590;
    }
}

loc_8009358C:
{
    goto loc_800935A4;
}

loc_80093590:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -28524));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80093598:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800935A0;
    }
}

loc_8009359C:
{
    goto loc_800935A4;
}

loc_800935A0:
{
    f2.d = f0.d;
}

loc_800935A4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28536));
    MemoryInline::FlatWriteFloat32((r3 + 108), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800935B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800935BC;
    }
}

loc_800935B8:
{
    goto loc_800935D0;
}

loc_800935BC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -28524));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800935C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800935CC;
    }
}

loc_800935C8:
{
    goto loc_800935D0;
}

loc_800935CC:
{
    f1.d = f0.d;
}

loc_800935D0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28536));
    MemoryInline::FlatWriteFloat32((r3 + 112), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800935E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800935E8;
    }
}

loc_800935E4:
{
    goto loc_800935FC;
}

loc_800935E8:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -28524));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800935F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800935F8;
    }
}

loc_800935F4:
{
    goto loc_800935FC;
}

loc_800935F8:
{
    f2.d = f0.d;
}

loc_800935FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r31 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -28524));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8009360C:
{
    MemoryInline::FlatWriteFloat32((r3 + 124), f2.d);
    MemoryInline::FlatWrite32((r3 + 116), r31);
    MemoryInline::FlatWrite32((r3 + 120), r31);
    MemoryInline::FlatWriteFloat32((r3 + 128), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80093628;
    }
}

loc_80093620:
{
    r3 = 1;
    goto loc_800936B0;
}

loc_80093628:
{
    r3 = (r3 + 44);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8012A154u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r0 = (r3 + 135);
    r3 = (r0 & -32);
}

loc_80093640:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80093648;
    }
}

loc_80093644:
{
    goto loc_80093650;
}

loc_80093648:
{
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r31 = (r0 - r4);
}

loc_80093650:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r31));
}

loc_80093654:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80093660;
    }
}

loc_80093658:
{
    r3 = 0;
    goto loc_800936B0;
}

loc_80093660:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80093664:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80093698;
    }
}

loc_80093668:
{
    r3 = (r29 + 16);
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x80093678u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8008D1E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    r3 = (r29 + 44);
    ctx->lr = 0x80093680u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012A440u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r29 + 16);
    ctx->lr = 0x80093694u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8008D240u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    goto loc_800936A4;
}

loc_80093698:
{
    r3 = (r29 + 44);
    ctx->lr = 0x800936A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012A5C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = r3;
}

loc_800936A4:
{
    r0 = (0 - r30);
    r0 = (r0 | r30);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_800936B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800934E0 func_800934E0 preserves=true fpr_mask=0x00000000
