#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065F6DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8065F6DC;

loc_8065F6DC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -272), 0, 280u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    r7 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 276u, (r1 + 276), r0);
    r8 = (r1 + 32);
    r9 = (r1 + 48);
    r10 = (r1 + 64);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r1 + 232), r22);
        MemoryInline::WriteResolved32(guest_range_0, 236u, (r1 + 236), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 240u, (r1 + 240), r24);
        MemoryInline::WriteResolved32(guest_range_0, 244u, (r1 + 244), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 248u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 248u, (r1 + 248), r26);
        MemoryInline::WriteResolved32(guest_range_0, 252u, (r1 + 252), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 256u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 256u, (r1 + 256), r28);
        MemoryInline::WriteResolved32(guest_range_0, 260u, (r1 + 260), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 264u, (r1 + 264), r30);
        MemoryInline::WriteResolved32(guest_range_0, 268u, (r1 + 268), r31);
    }
    r11 = (r1 + 80);
    r12 = (r1 + 96);
    r6 = (r1 + 112);
    r0 = (r1 + 208);
    r24 = r3;
    r25 = r4;
    r26 = r5;
    r3 = (r1 + 16);
    r4 = 8;
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r9);
    r9 = (r1 + 128);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r10);
    r10 = (r1 + 144);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r11);
    r11 = (r1 + 160);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r1 + 80), r12);
    r12 = (r1 + 176);
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r1 + 96), r6);
    r6 = (r1 + 192);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r7);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r8);
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r1 + 112), r9);
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r1 + 128), r10);
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r1 + 144), r11);
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r1 + 160), r12);
    MemoryInline::WriteResolved32(guest_range_0, 176u, (r1 + 176), r6);
    MemoryInline::WriteResolved32(guest_range_0, 192u, (r1 + 192), r0);
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r1 + 208), r7);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r8);
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x800AEF60
    r0 = 12;
    r22 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r0);
    r30 = r24;
    r29 = r24;
    r22 = (r22 + 13984);
    r28 = 0;
    r27 = 0;
    r31 = 0x809C0000u;
    r23 = 0x809C0000u;
    goto loc_8065F89C;
}

loc_8065F7A0:
{
    r3 = MemoryInline::FlatRead32((r31 + 8016));
    r4 = r27;
    ctx->lr = 0x8065F7ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F7B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F7D0;
    }
}

loc_8065F7B4:
{
    r3 = MemoryInline::FlatRead32((r31 + 8016));
    r4 = r27;
    ctx->lr = 0x8065F7C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    goto loc_8065F7F0;
}

loc_8065F7D0:
{
    r3 = MemoryInline::FlatRead32((r31 + 8016));
    r4 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
}

loc_8065F7E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065F7EC;
    }
}

loc_8065F7E4:
{
    r0 = MemoryInline::FlatRead8((r30 + 19));
    goto loc_8065F7F0;
}

loc_8065F7EC:
{
    r0 = 0;
}

loc_8065F7F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8065F7F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065F890;
    }
}

loc_8065F7F8:
{
    r3 = MemoryInline::FlatRead32((r31 + 8016));
    r4 = r27;
    ctx->lr = 0x8065F804u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065F808:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F828;
    }
}

loc_8065F80C:
{
    r3 = MemoryInline::FlatRead32((r31 + 8016));
    r4 = r27;
    ctx->lr = 0x8065F818u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    goto loc_8065F848;
}

loc_8065F828:
{
    r3 = MemoryInline::FlatRead32((r31 + 8016));
    r4 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
}

loc_8065F838:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065F844;
    }
}

loc_8065F83C:
{
    r0 = MemoryInline::FlatRead8((r30 + 17));
    goto loc_8065F848;
}

loc_8065F844:
{
    r0 = 20;
}

loc_8065F848:
{
    r0 = (r0 * 28);
    r3 = (r22 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8065F858:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(r0))) {
        goto loc_8065F890;
    }
}

loc_8065F85C:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r5 = MemoryInline::FlatRead32((r29 + 160));
}

loc_8065F868:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8065F874;
    }
}

loc_8065F86C:
{
    r4 = 0;
    goto loc_8065F87C;
}

loc_8065F874:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
}

loc_8065F87C:
{
    MemoryInline::FlatWrite32(r4, r27);
    r3 = (r1 + 16);
    MemoryInline::FlatWrite32((r4 + 4), r5);
    // inline leaf 0x800AEF80 (28 guest instruction(s))
}

loc_inl1_0x800AEF80:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x800AEF88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800AEFB8;
    }
}

loc_inl1_0x800AEF8C:
{
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = (r4 + r5);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32(r5, r0);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam32(r3, r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_800AEF80;
}

loc_inl1_0x800AEFB8:
{
    r6 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r6_addr_2 = (r6 + r4);
    MemoryInline::FlatWrite32(r6_addr_2, r5);
    r6 = r6_addr_2;
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r5 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
}

loc_inl1_cont_800AEF80:
{
    // end of inlined leaf 0x800AEF80
    r28 = (r28 + 1);
}

loc_8065F890:
{
    r30 = (r30 + 8);
    r29 = (r29 + 4);
    r27 = (r27 + 1);
}

loc_8065F89C:
{
    r3 = MemoryInline::FlatRead32((r23 + -10456));
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r0));
}

loc_8065F8A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065F7A0;
    }
}

loc_8065F8AC:
{
    r3 = (r1 + 16);
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AF1C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r22 = r3;
    goto loc_8065F980;
}

loc_8065F8C0:
{
    r4 = r22;
    r3 = (r1 + 16);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl2_0x800AF180:
{
}

loc_inl2_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800AF190;
    }
}

loc_inl2_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl2_cont_800AF180;
}

loc_inl2_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    r23 = r3;
    r4 = r22;
    r3 = (r1 + 16);
    // inline leaf 0x800AF1A0 (7 guest instruction(s))
}

loc_inl3_0x800AF1A0:
{
}

loc_inl3_0x800AF1A4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800AF1B0;
    }
}

loc_inl3_0x800AF1A8:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl3_cont_800AF1A0;
}

loc_inl3_0x800AF1B0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_inl3_cont_800AF1A0:
{
    // end of inlined leaf 0x800AF1A0
    r4 = r3;
    r0 = MemoryInline::FlatRead32((r22 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8065F8EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065F8F8;
    }
}

loc_8065F8F0:
{
    r0 = 0;
    goto loc_8065F904;
}

loc_8065F8F8:
{
    r0 = 1;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8065F904;
    }
}

loc_8065F900:
{
    r0 = -1;
}

loc_8065F904:
{
}

loc_8065F908:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8065F97C;
    }
}

loc_8065F90C:
{
    goto loc_8065F93C;
}

loc_8065F910:
{
    r0 = MemoryInline::FlatRead32((r22 + 4));
    r5 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8065F91C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065F928;
    }
}

loc_8065F920:
{
    r0 = 0;
    goto loc_8065F934;
}

loc_8065F928:
{
    r0 = 1;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8065F934;
    }
}

loc_8065F930:
{
    r0 = -1;
}

loc_8065F934:
{
}

loc_8065F938:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8065F950;
    }
}

loc_8065F93C:
{
    r3 = (r1 + 16);
    // inline leaf 0x800AF1A0 (7 guest instruction(s))
}

loc_inl4_0x800AF1A0:
{
}

loc_inl4_0x800AF1A4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800AF1B0;
    }
}

loc_inl4_0x800AF1A8:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl4_cont_800AF1A0;
}

loc_inl4_0x800AF1B0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4_addr_5 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_5);
}

loc_inl4_cont_800AF1A0:
{
    // end of inlined leaf 0x800AF1A0
}

loc_8065F948:
{
    r4 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8065F910;
    }
}

loc_8065F950:
{
    r4 = r3;
    r3 = (r1 + 16);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl5_0x800AF180:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl5_0x800AF184:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl5_0x800AF190;
    }
}

loc_inl5_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl5_cont_800AF180;
}

loc_inl5_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl5_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    r24 = r3;
    r4 = r22;
    r3 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AF110u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r4 = r24;
    r5 = r22;
    r3 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AEFF0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
}

loc_8065F97C:
{
    r22 = r23;
}

loc_8065F980:
{
}

loc_8065F984:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_8065F8C0;
    }
}

loc_8065F988:
{
    r22 = 0;
    goto loc_8065F9AC;
}

loc_8065F990:
{
    r3 = (r1 + 16);
    r4 = (r22 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AF1C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32(r3);
    r22 = (r22 + 1);
    MemoryInline::FlatWrite32(r26, r0);
    r26 = (r26 + 4);
}

loc_8065F9AC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r22), static_cast<uint32_t>(r28));
}

loc_8065F9B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065F990;
    }
}

loc_8065F9B4:
{
    r3 = r28;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 232), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 232));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 236));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 240));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 244));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 248));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 252));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 256));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 260));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 264));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 268));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
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
    ctx->gpr[12] = r12;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC001FB gpr_write=0xFFC01FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8065F6DC func_8065F6DC preserves=true fpr_mask=0x00000000
