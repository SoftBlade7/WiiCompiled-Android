#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8058C0DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8058C0DC;

loc_8058C0DC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    ctx->lr = 0x8058C110u;
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
    InvokeDirectCpu<0x805B4DC0u>(ctx);
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
    r3 = r31;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    ctx->lr = 0x8058C11Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805852C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_0 = MemoryInline::ResolveRangeHost(r28, 0, 52u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r28);
    r4 = 0x80890000u;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 32), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r31 + 60), f0.d);
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 6920));
    r4 = r28;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r28 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r31 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r28 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r31 + 68), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r31 + 40), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r31 + 36), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r31 + 32), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r28 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r31 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r28 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r31 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r28 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r31 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r28 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r31 + 56), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r31 + 76), f1.d);
    // inline leaf 0x80590238 (11 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r3);
    f2.d = MemoryInline::FlatReadFloat32(r4);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 104), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 108), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 112), f0.d);
    // end of inlined leaf 0x80590238
    r3 = r31;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r28 + 36));
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 240), 0, 32u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 256), f0.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r28 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 260), f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r28 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 264), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r28 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 268), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r3 + 240), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 244), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 248), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 252), f0.d);
    }
    r3 = r31;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r28 + 12));
    r30 = r3;
    MemoryInline::FlatWriteFloat32((r3 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r28 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r28 + 20));
    MemoryInline::FlatWriteFloat32((r3 + 88), f0.d);
    r3 = r31;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::FlatReadFloat32((r30 + 80));
    r29 = r3;
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 84));
    MemoryInline::FlatWriteFloat32((r3 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 88));
    MemoryInline::FlatWriteFloat32((r3 + 100), f0.d);
    r3 = r31;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::FlatReadFloat32((r29 + 92));
    MemoryInline::FlatWriteFloat32((r3 + 128), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 96));
    MemoryInline::FlatWriteFloat32((r3 + 132), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 100));
    MemoryInline::FlatWriteFloat32((r3 + 136), f0.d);
    r3 = r31;
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r28 + 32));
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    MemoryInline::FlatWriteFloat32((r3 + 156), f31.d);
    r3 = r31;
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r28 + 24));
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    MemoryInline::FlatWriteFloat32((r3 + 32), f31.d);
    r3 = r31;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r29 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 16688));
    r30 = (r29 + 16688);
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    r3 = r31;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::FlatReadFloat32((r29 + 16688));
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 76), f0.d);
    r3 = r31;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    ctx->lr = 0x8058C29Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80579F20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = r31;
    // inline leaf 0x80590764 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // end of inlined leaf 0x80590764
    ctx->lr = 0x8058C2A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80597934u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = r31;
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    r4 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 104));
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 108));
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 112));
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 212));
    MemoryInline::FlatWriteFloat32((r3 + 240), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 216));
    MemoryInline::FlatWriteFloat32((r3 + 244), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 220));
    MemoryInline::FlatWriteFloat32((r3 + 248), f0.d);
    r3 = r31;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r29 = r3;
    r3 = r31;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r4 = r29;
    ctx->lr = 0x8058C304u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80584648u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    // inline leaf 0x8059152C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 80));
    // end of inlined leaf 0x8059152C
    ctx->lr = 0x8058C310u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80787D50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = 0;
    goto loc_8058C32C;
}

loc_8058C318:
{
    r3 = r31;
    r4 = r29;
    // inline leaf 0x805906B4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x805906B4
    ctx->lr = 0x8058C328u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80598BE4u>(ctx);
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r29 = (r29 + 1);
}

loc_8058C32C:
{
    r3 = r31;
    // inline leaf 0x805902DC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead16((r3 + 12));
    // end of inlined leaf 0x805902DC
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_8058C33C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8058C318;
    }
}

loc_8058C340:
{
    r30 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r30 + 18248));
}

loc_8058C34C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8058C36C;
    }
}

loc_8058C350:
{
    r3 = r31;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = MemoryInline::FlatRead32((r30 + 18248));
    r0 = (r3 & 255);
    r5 = 1;
    r3 = (r4 + r0);
    MemoryInline::FlatWrite8((r3 + 1260), static_cast<uint8_t>(r5));
}

loc_8058C36C:
{
    r30 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r30 + 18796));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8058C378:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8058C398;
    }
}

loc_8058C37C:
{
    r3 = r31;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = MemoryInline::FlatRead32((r30 + 18796));
    r0 = (r3 & 255);
    r5 = 1;
    r3 = (r4 + r0);
    MemoryInline::FlatWrite8((r3 + 8040), static_cast<uint8_t>(r5));
}

loc_8058C398:
{
    r3 = 0x80890000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 6920));
    MemoryInline::FlatWrite8((r31 + 85), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 86), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFE1 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8058C0DC func_8058C0DC preserves=false fpr_mask=0x80000000
