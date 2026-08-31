#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8088344C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8088344C;

loc_8088344C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 32u, (r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r5 = 0x808B0000u;
    r5 = (r5 + 9732);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 28), r31);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 24), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 20), r29);
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 16), r28);
    }
    r28 = r3;
    ctx->lr = 0x80883488u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081EFECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 3;
    MemoryInline::FlatWrite32((r28 + 176), r0);
    r3 = (r0 * 100);
    r3 = (r3 + 16);
    ctx->lr = 0x8088349Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80870000u;
    r5 = 0x80870000u;
    r4 = (r4 + -13944);
    r6 = 100;
    r5 = (r5 + -13940);
    r7 = 3;
    ctx->lr = 0x808834B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = 0x808B0000u;
    r4 = 0x808B0000u;
    MemoryInline::FlatWrite32((r28 + 180), r3);
    r30 = 0;
    f30.d = MemoryInline::FlatReadFloat32((r5 + 9632));
    r29 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r4 + 9676));
    r31 = 0;
    goto loc_80883564;
}

loc_808834DC:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r28 + 180), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r28 + 180));
    r3_addr_2 = (r3 + r29);
    MemoryInline::FlatWrite32(r3_addr_2, r31);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r28 + 180));
    r3 = (r0 + r29);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r28 + 180));
    r3 = (r0 + r29);
    MemoryInline::FlatWrite32((r3 + 8), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r28 + 180));
    r3 = (r0 + r29);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r31));
    r0 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r28 + 180));
    r3 = (r0 + r29);
    MemoryInline::FlatWrite32((r3 + 16), r31);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r28 + 180));
    r3 = (r0 + r29);
    MemoryInline::FlatWriteFloat32((r3 + 28), f30.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f30.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f30.d);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r28 + 180));
    r3 = (r0 + r29);
    MemoryInline::FlatWriteFloat32((r3 + 32), f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f31.d);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r28 + 180));
    r3 = (r0 + r29);
    r3 = (r3 + 44);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_5 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 16u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 28u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 44u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_5, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    r0 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r28 + 180));
    r30 = (r30 + 1);
    r3 = (r0 + r29);
    r29 = (r29 + 100);
    MemoryInline::FlatWriteFloat32((r3 + 92), f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 96), f31.d);
}

loc_80883564:
{
    r0 = MemoryInline::FlatRead32((r28 + 176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_8088356C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_808834DC;
    }
}

loc_80883570:
{
    r4 = 0x808E0000u;
    r3 = 0x808B0000u;
    r4 = (r4 + -13280);
    MemoryInline::FlatWrite32(r28, r4);
    r4 = 0x809C0000u;
    r3 = (r3 + 9732);
    r0 = MemoryInline::FlatRead32((r4 + 18808));
    r29 = (r3 + 5);
    MemoryInline::FlatWrite32((r28 + 184), r0);
    r3 = 124;
    ctx->lr = 0x8088359Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808835A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808835B0;
    }
}

loc_808835A4:
{
    r4 = r29;
    r5 = 0;
    ctx->lr = 0x808835B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80222CCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_808835B0:
{
    guest_range_6 = MemoryInline::ResolveRangeHost((r28 + 180), 0, 4u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r28 + 180));
    r4 = 0x808B0000u;
    r29 = 0x808B0000u;
    r5 = 0;
    MemoryInline::FlatWrite32(r6, r3);
    r0 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 9632));
    r3 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r28 + 180));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 9676));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r5));
    r3 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r28 + 180));
    MemoryInline::FlatWrite32((r3 + 8), r5);
    r3 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r28 + 180));
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r28 + 180));
    MemoryInline::FlatWrite32((r3 + 16), r5);
    r3 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r28 + 180));
    MemoryInline::FlatWriteFloat32((r3 + 28), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f1.d);
    r3 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r28 + 180));
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r28 + 180));
    r3 = (r3 + 44);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    r4 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r28 + 180));
    r3 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 9676));
    r3 = (r3 + 9732);
    MemoryInline::FlatWriteFloat32((r4 + 92), f0.d);
    r29 = (r3 + 17);
    r3 = 124;
    MemoryInline::FlatWriteFloat32((r4 + 96), f0.d);
    ctx->lr = 0x80883640u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80883644:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80883654;
    }
}

loc_80883648:
{
    r4 = r29;
    r5 = 0;
    ctx->lr = 0x80883654u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80222CCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80883654:
{
    guest_range_7 = MemoryInline::ResolveRangeHost((r28 + 180), 0, 4u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r28 + 180));
    r4 = 0x808B0000u;
    r29 = 0x808B0000u;
    r5 = 0;
    MemoryInline::FlatWrite32((r6 + 100), r3);
    r0 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 9632));
    r3 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r28 + 180));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 9676));
    MemoryInline::FlatWrite8((r3 + 104), static_cast<uint8_t>(r5));
    r3 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r28 + 180));
    MemoryInline::FlatWrite32((r3 + 108), r5);
    r3 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r28 + 180));
    MemoryInline::FlatWrite8((r3 + 112), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r28 + 180));
    MemoryInline::FlatWrite32((r3 + 116), r5);
    r3 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r28 + 180));
    MemoryInline::FlatWriteFloat32((r3 + 128), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 124), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 120), f1.d);
    r3 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r28 + 180));
    MemoryInline::FlatWriteFloat32((r3 + 132), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 136), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 140), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r28 + 180));
    r3 = (r3 + 144);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    r4 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r28 + 180));
    r3 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 9676));
    r3 = (r3 + 9732);
    MemoryInline::FlatWriteFloat32((r4 + 192), f0.d);
    r29 = (r3 + 30);
    r3 = 124;
    MemoryInline::FlatWriteFloat32((r4 + 196), f0.d);
    ctx->lr = 0x808836E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808836E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808836F8;
    }
}

loc_808836EC:
{
    r4 = r29;
    r5 = 0;
    ctx->lr = 0x808836F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80222CCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_808836F8:
{
    guest_range_8 = MemoryInline::ResolveRangeHost((r28 + 180), 0, 4u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r28 + 180));
    r4 = 0x808B0000u;
    r29 = 0x808B0000u;
    r5 = 1;
    MemoryInline::FlatWrite32((r6 + 200), r3);
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 9632));
    r3 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r28 + 180));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 9676));
    MemoryInline::FlatWrite8((r3 + 204), static_cast<uint8_t>(r5));
    r3 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r28 + 180));
    MemoryInline::FlatWrite32((r3 + 208), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r28 + 180));
    MemoryInline::FlatWrite8((r3 + 212), static_cast<uint8_t>(r5));
    r3 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r28 + 180));
    MemoryInline::FlatWrite32((r3 + 216), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r28 + 180));
    MemoryInline::FlatWriteFloat32((r3 + 228), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 224), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 220), f1.d);
    r3 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r28 + 180));
    MemoryInline::FlatWriteFloat32((r3 + 232), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 236), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 240), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r28 + 180));
    r3 = (r3 + 244);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    r4 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r28 + 180));
    r5 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 9676));
    r3 = r28;
    MemoryInline::FlatWriteFloat32((r4 + 292), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 296), f0.d);
    r4 = MemoryInline::FlatRead32((r5 + 18808));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r5 + 18808), r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8088344C func_8088344C preserves=false fpr_mask=0xC0000000
