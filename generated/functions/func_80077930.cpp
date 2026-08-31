#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80077930(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80077930;

loc_80077930:
{
    MemoryInline::FlatWriteRam32((r1 + -352), r1);
    r1 = (r1 + -352);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 356), r0);
    r11 = (r1 + 352);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r6));
    r31 = r3;
    r10 = 0;
    r9 = 0;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r8));
    r6 = -1;
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r7);
    goto loc_800779A0;
}

loc_8007796C:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r10 = (r10 + 1);
    r4 = (r0 + r9);
    guest_range_4 = MemoryInline::ResolveRangeHost((r4 + 1), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r4 + 8), static_cast<uint8_t>(r6));
    r9_addr_2 = (r9 + r0);
    MemoryInline::FlatWrite8(r9_addr_2, static_cast<uint8_t>(r6));
    r9 = (r9 + 12);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r4 + 1), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r4 + 2), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r4 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r4 + 4), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r4 + 5), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r4 + 6), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r4 + 7), static_cast<uint8_t>(r6));
}

loc_800779A0:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r10), static_cast<uint32_t>(r0));
}

loc_800779A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8007796C;
    }
}

loc_800779AC:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r29 = 0;
    r6 = 2;
    r0 = -1;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r29));
    r4 = 64;
    r5 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r6));
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r3 = (r1 + 236);
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -29236), 0, 8u, true, false);
    r11 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r2 + -29236));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r2 + -29235));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r2 + -29234));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r2 + -29233));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r2 + -29232));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r2 + -29231));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r2 + -29230));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r2 + -29229));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 216u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 4u, (r1 + 24), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_5, 5u, (r1 + 25), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_5, 6u, (r1 + 26), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_5, 7u, (r1 + 27), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r1 + 20), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r1 + 21), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r1 + 22), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r1 + 23), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_5, 144u, (r1 + 164), r29);
    MemoryInline::WriteResolved32(guest_range_5, 76u, (r1 + 96), r29);
    MemoryInline::WriteResolved32(guest_range_5, 8u, (r1 + 28), r29);
    MemoryInline::WriteResolved32(guest_range_5, 212u, (r1 + 232), r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80060F20u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 164), r29);
    r3 = (r1 + 168);
    r4 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80060F20u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 96), r29);
    r3 = (r1 + 100);
    r4 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80060F20u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 28), r29);
    r3 = (r1 + 32);
    r4 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80060F20u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r3 = (r1 + 236);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r4 = (r1 + 16);
    // inline leaf 0x80170314 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    // end of inlined leaf 0x80170314
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29228));
    r3 = (r1 + 236);
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80170198 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 40), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 48), f3.d);
    // end of inlined leaf 0x80170198
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29248));
    r3 = (r1 + 236);
    r0 = MemoryInline::FlatRead32((r1 + 232));
    f3.d = f1.d;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29224));
    r0 = (r0 & -3);
    MemoryInline::FlatWriteRam32((r1 + 232), r0);
    // inline leaf 0x801701C4 (7 guest instruction(s))
    f4.d = (-(f1.d));
    f1.d = (-(f2.d));
    f0.d = (-(f3.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 52), f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 56), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 60), f0.d);
    // end of inlined leaf 0x801701C4
    r0 = MemoryInline::FlatRead32((r1 + 232));
    r3 = (r1 + 236);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29220));
    r4 = 0;
    r0 = (r0 & -3);
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam32((r1 + 232), r0);
    ctx->lr = 0x80077AC4u;
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
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016FF40u>(ctx);
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
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 232));
    r3 = (r1 + 236);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29216));
    r4 = 0;
    r0 = (r0 & -3);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29240));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam32((r1 + 232), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801700C8u>(ctx);
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32((r1 + 232));
    r3 = (r1 + 168);
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r4 = (r1 + 12);
    r5 = (r5 & -3);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r5 | 5);
    MemoryInline::FlatWriteRam32((r1 + 232), r0);
    // inline leaf 0x80170314 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    // end of inlined leaf 0x80170314
    guest_range_2 = MemoryInline::ResolveRangeHost((r2 + -29248), 0, 44u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r2 + -29228));
    r3 = (r1 + 168);
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80170198 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 40), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 48), f3.d);
    // end of inlined leaf 0x80170198
    r5 = MemoryInline::FlatRead32((r1 + 164));
    r3 = (r1 + 100);
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r4 = (r1 + 8);
    r5 = (r5 & -3);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = (r5 | 4);
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    // inline leaf 0x80170314 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    // end of inlined leaf 0x80170314
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r2 + -29228));
    r3 = (r1 + 100);
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80170198 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 40), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 48), f3.d);
    // end of inlined leaf 0x80170198
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -29248));
    r3 = (r1 + 100);
    r0 = MemoryInline::FlatRead32((r1 + 96));
    f3.d = f1.d;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r2 + -29224));
    r0 = (r0 & -3);
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    // inline leaf 0x801701C4 (7 guest instruction(s))
    f4.d = (-(f1.d));
    f1.d = (-(f2.d));
    f0.d = (-(f3.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 52), f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 56), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 60), f0.d);
    // end of inlined leaf 0x801701C4
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -29248));
    r3 = (r1 + 100);
    r0 = MemoryInline::FlatRead32((r1 + 96));
    f2.d = f1.d;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r2 + -29244));
    r0 = (r0 & -2);
    f5.d = f1.d;
    r0 = (r0 | 10);
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 36u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
            f6.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r2 + -29212));
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r2 + -29208));
        }
    }
    // inline leaf 0x8016FF04 (7 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 20), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 24), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 32), f5.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 36), f6.d);
    // end of inlined leaf 0x8016FF04
    r3 = MemoryInline::FlatRead32((r1 + 96));
    r0 = MemoryInline::FlatRead32((r1 + 28));
    r3 = (r3 & -2);
    r3 = (r3 | 6);
    r0 = (r0 & -5);
    MemoryInline::FlatWriteRam32((r1 + 96), r3);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = MemoryInline::FlatRead16(r31);
}

loc_80077BCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80077C1C;
    }
}

loc_80077BD0:
{
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r1 + 232);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80077BDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80077BF8;
    }
}

loc_80077BE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 232));
    r3 = (r4 + 4);
    MemoryInline::FlatWrite32(r4, r0);
    r4 = (r1 + 236);
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80060E40u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_80077BF8:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = MemoryInline::FlatRead8((r1 + 20));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 21));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 22));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 23));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_80077C1C:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_80077C24:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80077C78;
    }
}

loc_80077C28:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r1 + 164);
    r4 = (r3 + 68);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80077C38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80077C54;
    }
}

loc_80077C3C:
{
    r0 = MemoryInline::FlatRead32((r1 + 164));
    r3 = (r4 + 4);
    MemoryInline::FlatWrite32(r4, r0);
    r4 = (r1 + 168);
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80060E40u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_80077C54:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = MemoryInline::FlatRead8((r1 + 20));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 21));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 22));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 23));
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
}

loc_80077C78:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_80077C80:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80077CD4;
    }
}

loc_80077C84:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r1 + 96);
    r4 = (r3 + 136);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80077C94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80077CB0;
    }
}

loc_80077C98:
{
    r0 = MemoryInline::FlatRead32((r1 + 96));
    r3 = (r4 + 4);
    MemoryInline::FlatWrite32(r4, r0);
    r4 = (r1 + 100);
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80060E40u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_80077CB0:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = MemoryInline::FlatRead8((r1 + 20));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 21));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 22));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 23));
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r0));
}

loc_80077CD4:
{
    r26 = MemoryInline::FlatRead8((r1 + 21));
    r29 = (r1 + 28);
    r25 = MemoryInline::FlatRead8((r1 + 22));
    r23 = 3;
    r24 = MemoryInline::FlatRead8((r1 + 23));
    r28 = 204;
    r30 = MemoryInline::FlatRead8((r1 + 20));
    r27 = 12;
    goto loc_80077D44;
}

loc_80077CF8:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r0 + r28);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r29));
}

loc_80077D04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80077D20;
    }
}

loc_80077D08:
{
    r0 = MemoryInline::FlatRead32((r1 + 28));
    r3 = (r4 + 4);
    MemoryInline::FlatWrite32(r4, r0);
    r4 = (r1 + 32);
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80060E40u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_80077D20:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r28 = (r28 + 68);
    r23 = (r23 + 1);
    r27_addr_2 = (r27 + r0);
    MemoryInline::FlatWrite8(r27_addr_2, static_cast<uint8_t>(r30));
    r3 = (r0 + r27);
    r27 = (r27 + 4);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r24));
}

loc_80077D44:
{
    r0 = MemoryInline::FlatRead16(r31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r23), static_cast<uint32_t>(r0));
}

loc_80077D4C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80077CF8;
    }
}

loc_80077D50:
{
    r11 = (r1 + 352);
    r3 = r31;
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 356));
    ctx->lr = r0;
    r1 = (r1 + 352);
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
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFD7FF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF8003E1 fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80077930 func_80077930 preserves=true fpr_mask=0x00000000
