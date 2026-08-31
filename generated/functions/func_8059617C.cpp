#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059617C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8059617C;

loc_8059617C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    ctx->lr = 0x805961B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8059F7C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = r29;
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    ctx->lr = 0x805961BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x805A0340u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r3 = r29;
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    ctx->lr = 0x805961C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x805730D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = r29;
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    r30 = r3;
    r3 = r29;
    // inline leaf 0x8059069C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x8059069C
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 156), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r30 + 156));
    r31 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 28), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r3 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r30 + 160));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r30 + 164));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r30 + 168));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r30 + 172));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r30 + 176));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r30 + 180));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r30 + 184));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r30 + 188));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r30 + 192));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r30 + 196));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 68), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r30 + 200));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 72), f0.d);
    goto loc_80596258;
}

loc_80596244:
{
    r3 = r29;
    r4 = r31;
    // inline leaf 0x80590704 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x80590704
    // inline leaf 0x80599F54 (19 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 16));
    r5 = 0x80890000u;
    r4 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8056));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 12));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8040));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    guest_range_4 = MemoryInline::ResolveRangeHost((r3 + 36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r3 + 44), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r3 + 36), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r3 + 48), f0.d);
    MemoryInline::WriteResolved8(guest_range_4, 16u, (r3 + 52), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r3 + 56), f1.d);
    MemoryInline::WriteResolved16(guest_range_4, 18u, (r3 + 54), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 32u, (r3 + 68), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r3 + 64), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 24u, (r3 + 60), f0.d);
    // end of inlined leaf 0x80599F54
    r31 = (r31 + 1);
}

loc_80596258:
{
    r3 = r29;
    // inline leaf 0x805902DC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead16((r3 + 12));
    // end of inlined leaf 0x805902DC
    r0 = (r3 & 65535);
}

loc_80596268:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r0))) {
        goto loc_80596244;
    }
}

loc_8059626C:
{
    r30 = 0;
    goto loc_80596288;
}

loc_80596274:
{
    r3 = r29;
    r4 = r30;
    // inline leaf 0x80590734 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    r3 = MemoryInline::FlatRead32((r3 + 152));
    // end of inlined leaf 0x80590734
    ctx->lr = 0x80596284u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80599508u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r30 = (r30 + 1);
}

loc_80596288:
{
    r3 = r29;
    // inline leaf 0x805902EC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead16((r3 + 14));
    // end of inlined leaf 0x805902EC
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80596298:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80596274;
    }
}

loc_8059629C:
{
    r3 = r29;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    // inline leaf 0x8057B9AC (4 guest instruction(s))
    r4 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 23028));
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x8057B9AC
    r3 = r29;
    // inline leaf 0x805907D8 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x805907D8
    r30 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 7964));
    r3 = r29;
    f31.d = PpcFmulsInline(f0.d, f1.d);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r3 = r29;
    // inline leaf 0x8059152C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 80));
    // end of inlined leaf 0x8059152C
    MemoryInline::FlatWriteFloat32((r3 + 4), f31.d);
    r3 = r29;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r4 = 0x808B0000u;
    f30.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 25944));
    r3 = r29;
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    // inline leaf 0x80591520 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 76));
    // end of inlined leaf 0x80591520
    MemoryInline::FlatWriteFloat32((r3 + 4), f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f30.d));
    r31 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 7964));
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 7960));
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r4 = (r4 | 2048);
    MemoryInline::FlatWrite32((r3 + 12), r4);
    r3 = r29;
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 36), 0, 120u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 48u, (r29 + 84), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 52u, (r29 + 88), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 56u, (r29 + 92), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 60u, (r29 + 96), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r29 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r29 + 40), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r29 + 36), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r29 + 56), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r29 + 52), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r29 + 48), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 64u, (r29 + 100), f0.d);
    // inline leaf 0x80590264 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 156);
    // end of inlined leaf 0x80590264
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 48u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, r3);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 68u, (r29 + 104), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 7960));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 72u, (r29 + 108), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 76u, (r29 + 112), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 12u, (r3 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 80u, (r29 + 116), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r3 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 84u, (r29 + 120), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r3 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 88u, (r29 + 124), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, (r3 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 92u, (r29 + 128), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 28u, (r3 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 96u, (r29 + 132), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r3 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 100u, (r29 + 136), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 36u, (r3 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 104u, (r29 + 140), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 40u, (r3 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 108u, (r29 + 144), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 44u, (r3 + 44));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 112u, (r29 + 148), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 116u, (r29 + 152), f0.d);
    }
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00001DF gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0xC0000007 fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8059617C func_8059617C preserves=false fpr_mask=0xC0000000
