#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F5E44(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805F5E44;

loc_805F5E44:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80890000u;
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = (r3 + 12);
    r0 = (r3 + 6480);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 24728));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
}

loc_805F5E6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 24732));
    r31 = r3;
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5F84;
    }
}

loc_805F5E84:
{
    r8 = (r3 + 6384);
    r0 = 0;
    r4 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805F5E98;
    }
}

loc_805F5E94:
{
    r4 = 1;
}

loc_805F5E98:
{
}

loc_805F5E9C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805F5EA4;
    }
}

loc_805F5EA0:
{
    r0 = 1;
}

loc_805F5EA4:
{
}

loc_805F5EA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F5F40;
    }
}

loc_805F5EAC:
{
    r4 = (r8 + 95);
    r6 = 0x80890000u;
    r4 = (r4 - r7);
    r0 = 96;
    r4 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r5 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r6 + 24728));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 24732));
    ctr = r4;
}

loc_805F5ED4:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r8))) {
        goto loc_805F5F40;
    }
}

loc_805F5ED8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r7, 0, 96u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r7, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r7 + 4), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r7 + 8), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r7 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r7 + 16), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r7 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r7 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r7 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r7 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r7 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r7 + 40), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r7 + 44), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r7 + 48), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r7 + 52), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r7 + 56), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r7 + 60), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r7 + 64), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r7 + 68), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r7 + 72), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r7 + 76), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r7 + 80), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r7 + 84), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r7 + 88), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r7 + 92), f0.d);
    }
    r7 = (r7 + 96);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805F5ED8;
    }
}

loc_805F5F40:
{
    r4 = (r3 + 6480);
    r6 = 0x80890000u;
    r3 = (r4 + 11);
    r5 = 0x80890000u;
    r3 = (r3 - r7);
    r0 = 12;
    r3 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 24728));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 24732));
    ctr = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_805F5F6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F5F84;
    }
}

loc_805F5F70:
{
    MemoryInline::FlatWriteFloat32(r7, f1.d);
    MemoryInline::FlatWriteFloat32((r7 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r7 + 8), f0.d);
    r7 = (r7 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805F5F70;
    }
}

loc_805F5F84:
{
    r3 = r31;
    ctx->lr = 0x805F5F8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x805F5FFCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00001FB gpr_write=0xC00001FB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F5E44 func_805F5E44 preserves=true fpr_mask=0x00000000
