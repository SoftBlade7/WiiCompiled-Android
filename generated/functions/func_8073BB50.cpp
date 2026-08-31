#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073BB50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8073BB50;

loc_8073BB50:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = MemoryInline::FlatRead8((r4 + 40));
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r5 + -10520));
    r3 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8073BB7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8073BB88;
    }
}

loc_8073BB80:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_8073BB8C;
}

loc_8073BB88:
{
    r0 = 0;
}

loc_8073BB8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r0));
}

loc_8073BB90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8073BC10;
    }
}

loc_8073BB94:
{
    r3 = r4;
    r4 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80514B7Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 10164));
    r5 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r0 = 1;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32(r4);
    r4 = (r1 + 20);
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r1 + 12), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r1 + 16), f3.d);
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r1 + 37), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 40), r5);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 44), r5);
    }
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r1 + 48), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 41u, (r1 + 49), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r1 + 50), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 52), r5);
    MemoryInline::WriteResolved8(guest_range_0, 48u, (r1 + 56), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r1 + 28), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r1 + 32), f3.d);
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r1 + 20), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r1 + 36), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r1 + 60), f0.d);
    ctx->lr = 0x8073BC10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8073C110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8073BC10:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8073BB50 func_8073BB50 preserves=true fpr_mask=0x00000000
