#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80561688(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80561688;

loc_80561688:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r31 = 0x80890000u;
    r30 = r4;
    r29 = r3;
    r4 = 0;
    r31 = (r31 + 5096);
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x800AEF60
    r3 = (r29 + 12);
    r4 = 0;
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x800AEF60
    r4 = 0x808B0000u;
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r29 + 28), r30);
    r4 = (r4 + 19068);
    r3 = 44;
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r29 + 24), r4);
    r5 = 4;
    r28 = MemoryInline::FlatRead32((r30 + 40));
    r4 = MemoryInline::FlatRead32((r30 + 16));
    ctx->lr = 0x805616E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805616E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80561704;
    }
}

loc_805616EC:
{
    r5 = 0x808B0000u;
    r4 = MemoryInline::FlatRead16((r28 + 10360));
    r0 = MemoryInline::FlatRead32((r5 + 19440));
    r5 = r4;
    r6 = (r0 & 255);
    ctx->lr = 0x80561704u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022A38Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80561704:
{
    MemoryInline::FlatWrite32((r29 + 32), r3);
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r30 + 48));
    // inline leaf 0x8023C88C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    // end of inlined leaf 0x8023C88C
    r3 = MemoryInline::FlatRead32((r29 + 32));
    r4 = 16;
    r5 = 16;
    // inline leaf 0x8022A49C (3 guest instruction(s))
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r5));
    // end of inlined leaf 0x8022A49C
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x80561730u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x805610E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = 0x808B0000u;
    r6 = 0;
    r3 = (r3 + 19040);
    MemoryInline::FlatWrite32((r29 + 24), r3);
    goto loc_80561790;
}

loc_80561744:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & 1020);
    r6 = (r6 + 1);
    r3_addr_2 = (r3 + r4);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead16((r3 + 118));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 118), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_3 = (r3 + r4);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    r0 = MemoryInline::FlatRead16((r3 + 118));
    r0 = (r0 & -33);
    MemoryInline::FlatWrite16((r3 + 118), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_4 = (r3 + r4);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    r0 = MemoryInline::FlatRead16((r3 + 118));
    r0 = (r0 & -65);
    MemoryInline::FlatWrite16((r3 + 118), static_cast<uint16_t>(r0));
}

loc_80561790:
{
    r5 = MemoryInline::FlatRead32((r29 + 32));
    r3 = (r6 & 255);
    r0 = MemoryInline::FlatRead16((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_805617A0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80561744;
    }
}

loc_805617A4:
{
    r4 = (r31 + 16);
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 8), 0, 28u, true, false);
    r10 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r31 + 16));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r4 + 1));
    r3 = (r31 + 20);
    r8 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r4 + 2));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r4 + 3));
    r4 = MemoryInline::FlatRead32((r5 + 16));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r31 + 8));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r10));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r31 + 28));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r9));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r31 + 32));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r7));
    r4 = MemoryInline::FlatRead32((r29 + 32));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r3 + 1));
    r6 = MemoryInline::FlatRead32((r4 + 12));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r3 + 2));
    r27 = MemoryInline::FlatRead32(r6);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r3 + 3));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r31 + 20));
    r3 = r27;
    MemoryInline::FlatWrite8((r27 + 44), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r27 + 45), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r27 + 46), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r27 + 47), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r27 + 20), f2.d);
    MemoryInline::FlatWriteFloat32((r27 + 24), f1.d);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 56u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r1 + 16), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r1 + 17), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r1 + 18), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r1 + 19), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r1 + 12), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r1 + 13), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r1 + 14), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r1 + 15), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r1 + 56), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 48u, (r1 + 60), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 52u, (r1 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 28), f0.d);
    ctx->lr = 0x80561848u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r3 = r27;
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 16), f0.d);
    ctx->lr = 0x8056186Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r28 = 1;
    MemoryInline::FlatWrite32((r27 + 64), r28);
    r3 = r27;
    MemoryInline::FlatWrite32((r27 + 52), r28);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022B8D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r29 + 32));
    r3 = (r31 + 24);
    r5 = MemoryInline::FlatRead8((r3 + 1));
    r6 = MemoryInline::FlatRead32((r4 + 12));
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r27 = MemoryInline::FlatRead32((r6 + 32));
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r6 = MemoryInline::FlatRead8((r31 + 24));
    r3 = r27;
    MemoryInline::FlatWrite8((r27 + 44), static_cast<uint8_t>(r6));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWrite8((r27 + 45), static_cast<uint8_t>(r5));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 28));
    MemoryInline::FlatWrite8((r27 + 46), static_cast<uint8_t>(r4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    MemoryInline::FlatWrite8((r27 + 47), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r27 + 20), f2.d);
    MemoryInline::FlatWriteFloat32((r27 + 24), f1.d);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 28), f0.d);
    ctx->lr = 0x805618ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r3 = r27;
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 16), f0.d);
    ctx->lr = 0x80561910u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r27 + 64), r28);
    r3 = r27;
    MemoryInline::FlatWrite32((r27 + 52), r28);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022B8D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x8056192Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8056120Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r11 = (r1 + 96);
    r3 = r29;
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80561688 func_80561688 preserves=true fpr_mask=0x00000000
