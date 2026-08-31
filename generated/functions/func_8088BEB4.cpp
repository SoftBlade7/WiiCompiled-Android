#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8088BEB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r16_rot_0 = 0;
    uint32_t r16_rot_1 = 0;
    uint32_t r16_rot_2 = 0;
    uint32_t r18_mdest_0 = 0;
    uint32_t r18_mdest_1 = 0;
    uint32_t r18_mdest_2 = 0;
    uint32_t r18_mdest_3 = 0;
    uint32_t r18_mdest_4 = 0;
    uint32_t r18_mrot_0 = 0;
    uint32_t r18_mrot_1 = 0;
    uint32_t r18_mrot_2 = 0;
    uint32_t r18_mrot_3 = 0;
    uint32_t r18_mrot_4 = 0;
    uint32_t r18_rot_0 = 0;
    uint32_t r18_rot_1 = 0;
    uint32_t r18_rot_2 = 0;
    uint32_t r18_rot_3 = 0;
    uint32_t r18_rot_4 = 0;
    uint32_t r18_rot_5 = 0;
    uint32_t r18_rot_6 = 0;
    uint32_t r19_mdest_0 = 0;
    uint32_t r19_mdest_1 = 0;
    uint32_t r19_mdest_2 = 0;
    uint32_t r19_mdest_3 = 0;
    uint32_t r19_mdest_4 = 0;
    uint32_t r19_mrot_0 = 0;
    uint32_t r19_mrot_1 = 0;
    uint32_t r19_mrot_2 = 0;
    uint32_t r19_mrot_3 = 0;
    uint32_t r19_mrot_4 = 0;
    uint32_t r19_rot_0 = 0;
    uint32_t r19_rot_1 = 0;
    uint32_t r19_rot_2 = 0;
    uint32_t r19_rot_3 = 0;
    uint32_t r19_rot_4 = 0;
    uint32_t r19_rot_5 = 0;
    uint32_t r19_rot_6 = 0;
    uint32_t r20_rot_0 = 0;
    uint32_t r20_rot_1 = 0;
    uint32_t r20_rot_2 = 0;
    uint32_t r20_rot_3 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r25_mdest_0 = 0;
    uint32_t r25_mdest_1 = 0;
    uint32_t r25_mdest_2 = 0;
    uint32_t r25_mdest_3 = 0;
    uint32_t r25_mdest_4 = 0;
    uint32_t r25_mrot_0 = 0;
    uint32_t r25_mrot_1 = 0;
    uint32_t r25_mrot_2 = 0;
    uint32_t r25_mrot_3 = 0;
    uint32_t r25_mrot_4 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
    uint32_t r25_rot_5 = 0;
    uint32_t r26_mdest_0 = 0;
    uint32_t r26_mdest_1 = 0;
    uint32_t r26_mdest_2 = 0;
    uint32_t r26_mdest_3 = 0;
    uint32_t r26_mdest_4 = 0;
    uint32_t r26_mrot_0 = 0;
    uint32_t r26_mrot_1 = 0;
    uint32_t r26_mrot_2 = 0;
    uint32_t r26_mrot_3 = 0;
    uint32_t r26_mrot_4 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r26_rot_4 = 0;
    uint32_t r26_rot_5 = 0;
    uint32_t r26_rot_6 = 0;
    uint32_t r26_rot_7 = 0;
    uint32_t r26_rot_8 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
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
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8088BEB4;

loc_8088BEB4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    r7 = 0x808B0000u;
    r8 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    r7 = (r7 + 10820);
    r8 = (r8 + 19288);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r14);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r16);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r20);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r22);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r1 + 80), r24);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r1 + 88), r26);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 92), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r1 + 96), r28);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r1 + 104), r30);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r1 + 108), r31);
    }
    r15 = r3;
    r17 = 0;
    r21 = 8;
}

loc_8088BEE0:
{
    r0 = MemoryInline::FlatRead8((r7 + 3));
    r14 = r8;
    r6 = MemoryInline::FlatRead8(r7);
    r9 = 0;
    r16_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r16 = (r16_rot_2 & 28672);
    r5 = MemoryInline::FlatRead8((r7 + 1));
    r4 = MemoryInline::FlatRead8((r7 + 2));
    r10 = 0;
    r11 = 0;
    r12 = 0;
    ctr = r21;
}

loc_8088BF0C:
{
}

loc_8088BF10:
{
    r18_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r18 = (r18_rot_3 & 536870911);
    r19_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r19 = (r19_rot_3 & 536870911);
    r20_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(29));
    r20 = (r20_rot_3 & 536870911);
    r24_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(29));
    r24 = (r24_rot_3 & 536870911);
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(224))) {
        goto loc_8088BF3C;
    }
}

loc_8088BF24:
{
    r25_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(29));
    r25 = (r25_rot_3 & 31);
    r26_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(2));
    r26 = (r26_rot_3 & 992);
    r26_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(7));
    r26_mrot_3 = (r26_rot_4 & 31744);
    r26_mdest_3 = (r26 & -31745);
    r26 = (r26_mdest_3 | r26_mrot_3);
    r25 = (r25 | 32768);
    r25 = (r26 | r25);
    goto loc_8088BF50;
}

loc_8088BF3C:
{
    r26_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(28));
    r26 = (r26_rot_5 & 15);
    r25 = (r19 & 240);
    r26 = (r16 | r26);
    r25_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(4));
    r25_mrot_3 = (r25_rot_4 & 3840);
    r25_mdest_3 = (r25 & -3841);
    r25 = (r25_mdest_3 | r25_mrot_3);
    r25 = (r26 | r25);
}

loc_8088BF50:
{
}

loc_8088BF54:
{
    MemoryInline::FlatWrite16(r14, static_cast<uint16_t>(r25));
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(224))) {
        goto loc_8088BF8C;
    }
}

loc_8088BF5C:
{
    r25 = (r24 + r4);
    r26 = (r24 + r6);
    r24 = (r24 + r5);
    r20 = (r25 - r20);
    r25 = (r26 - r18);
    r19 = (r24 - r19);
    r18_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(29));
    r18 = (r18_rot_4 & 31);
    r19_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(2));
    r19 = (r19_rot_4 & 992);
    r19_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(7));
    r19_mrot_3 = (r19_rot_5 & 31744);
    r19_mdest_3 = (r19 & -31745);
    r19 = (r19_mdest_3 | r19_mrot_3);
    r18 = (r18 | 32768);
    r18 = (r19 | r18);
    goto loc_8088BFB8;
}

loc_8088BF8C:
{
    r26 = (r24 + r4);
    r25 = (r24 + r6);
    r26 = (r26 - r20);
    r20 = (r24 + r5);
    r24 = (r25 - r18);
    r18 = (r20 - r19);
    r26_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(28));
    r26 = (r26_rot_7 & 15);
    r18 = (r18 & 240);
    r19 = (r16 | r26);
    r18_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(4));
    r18_mrot_3 = (r18_rot_5 & 3840);
    r18_mdest_3 = (r18 & -3841);
    r18 = (r18_mdest_3 | r18_mrot_3);
    r18 = (r19 | r18);
}

loc_8088BFB8:
{
    MemoryInline::FlatWrite16((r14 + 16), static_cast<uint16_t>(r18));
    r9 = (r9 + r6);
    r10 = (r10 + r5);
    r11 = (r11 + r4);
    r12 = (r12 + 255);
    r14 = (r14 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8088BF0C;
    }
}

loc_8088BFD4:
{
    r17 = (r17 + 1);
    r8 = (r8 + 32);
}

loc_8088BFE0:
{
    r7 = (r7 + 4);
    if ((static_cast<uint32_t>(r17) < static_cast<uint32_t>(9))) {
        goto loc_8088BEE0;
    }
}

loc_8088BFE8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 1028), r0);
    r4 = 0x809C0000u;
    r5 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    r6 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = MemoryInline::FlatRead32((r6 + 2928));
    r3 = (r4 + -3);
}

loc_8088C00C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(7))) {
        goto loc_8088C024;
    }
}

loc_8088C010:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
    r0 = (r0 & 193);
}

loc_8088C01C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8088C024;
    }
}

loc_8088C020:
{
    r5 = 1;
}

loc_8088C024:
{
}

loc_8088C028:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8088C040;
    }
}

loc_8088C02C:
{
}

loc_8088C030:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_8088C040;
    }
}

loc_8088C034:
{
    r0 = MemoryInline::FlatRead32((r6 + 2960));
    r0 = (r0 & 4);
}

loc_8088C03C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8088C2B8;
    }
}

loc_8088C040:
{
    r0 = MemoryInline::FlatRead32((r6 + 2960));
    r18 = 0;
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088C04C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088C090;
    }
}

loc_8088C050:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x8088C06Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r22 = 1;
    r21 = 3;
    r23 = MemoryInline::FlatRead16((r3 + 30));
}

loc_8088C080:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(1))) {
        goto loc_8088C090;
    }
}

loc_8088C084:
{
}

loc_8088C088:
{
    if ((static_cast<uint32_t>(r23) > static_cast<uint32_t>(999))) {
        goto loc_8088C090;
    }
}

loc_8088C08C:
{
    r18 = 1;
}

loc_8088C090:
{
    r25 = 0x809C0000u;
    r26 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r25 + 17200));
    r29 = 0x808B0000u;
    r3 = MemoryInline::FlatRead32((r26 + 17168));
    r28 = (r23 & 65535);
    r24 = MemoryInline::FlatRead16((r4 + 24));
    r30 = (r29 + 10860);
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r17 = 0;
    r20 = 0;
    r31 = 0;
    r19 = (r24 + r0);
    r27 = 0x809C0000u;
    r14 = 15;
    goto loc_8088C2B0;
}

loc_8088C0D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(r24));
}

loc_8088C0D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8088C0E8;
    }
}

loc_8088C0D8:
{
    r3 = MemoryInline::FlatRead32((r25 + 17200));
    r3 = MemoryInline::FlatRead32((r3 + 28));
    r3_addr_2 = (r3 + r20);
    r16 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_8088C0FC;
}

loc_8088C0E8:
{
    r3 = MemoryInline::FlatRead32((r26 + 17168));
    r0 = (r17 - r24);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_3 = (r3 + r0);
    r16 = MemoryInline::FlatRead32(r3_addr_3);
}

loc_8088C0FC:
{
    r12 = MemoryInline::FlatRead32(r16);
    r3 = r16;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8088C110u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r7 = (r29 + 10860);
    r5 = (r3 & 65535);
    r6 = MemoryInline::FlatRead32((r27 + -10456));
    r9 = 0;
    r4 = 0;
    ctr = r14;
}

loc_8088C128:
{
    r8 = MemoryInline::FlatRead16((r7 + 2));
}

loc_8088C130:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r8))) {
        goto loc_8088C210;
    }
}

loc_8088C134:
{
    r0 = MemoryInline::FlatRead8(r7);
}

loc_8088C13C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8088C148;
    }
}

loc_8088C140:
{
}

loc_8088C144:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r8))) {
        goto loc_8088C210;
    }
}

loc_8088C148:
{
    r8 = MemoryInline::FlatRead32((r7 + 16));
}

loc_8088C150:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(-1))) {
        goto loc_8088C160;
    }
}

loc_8088C154:
{
    r0 = MemoryInline::FlatRead32((r6 + 2920));
}

loc_8088C15C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(r0))) {
        goto loc_8088C210;
    }
}

loc_8088C160:
{
    r0 = (r4 * 20);
    r4 = (r30 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 4));
}

loc_8088C170:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8088C194;
    }
}

loc_8088C174:
{
    r0 = MemoryInline::FlatRead32(r15);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = (r15 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r16);
    r4 = MemoryInline::FlatRead32(r15);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32(r15, r0);
    goto loc_8088C208;
}

loc_8088C194:
{
    r0 = MemoryInline::FlatRead32((r15 + 1028));
    r6 = MemoryInline::FlatRead32((r4 + 8));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r4 = (r15 + r0);
    MemoryInline::FlatWrite32((r4 + 1032), r16);
    r0 = MemoryInline::FlatRead32((r15 + 1028));
    r0 = (r0 * 20);
    r4 = (r15 + r0);
    MemoryInline::FlatWrite32((r4 + 2076), r6);
    r0 = MemoryInline::FlatRead32((r15 + 1028));
    r0 = (r0 * 20);
    r4 = (r15 + r0);
    MemoryInline::FlatWrite32((r4 + 2080), r5);
    r0 = MemoryInline::FlatRead32((r15 + 1028));
    r0 = (r0 * 20);
    r4 = (r15 + r0);
    MemoryInline::FlatWrite8((r4 + 2084), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r15 + 1028));
    r0 = (r0 * 20);
    r4 = (r15 + r0);
    MemoryInline::FlatWrite32((r4 + 2088), r31);
    r0 = MemoryInline::FlatRead32((r15 + 1028));
    r0 = (r0 * 20);
    r4 = (r15 + r0);
    MemoryInline::FlatWrite32((r4 + 2092), r31);
    r4 = MemoryInline::FlatRead32((r15 + 1028));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r15 + 1028), r0);
}

loc_8088C208:
{
    r9 = 1;
    goto loc_8088C21C;
}

loc_8088C210:
{
    r7 = (r7 + 20);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8088C128;
    }
}

loc_8088C21C:
{
}

loc_8088C220:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8088C2A8;
    }
}

loc_8088C224:
{
}

loc_8088C228:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_8088C2A8;
    }
}

loc_8088C22C:
{
    r3 = (r3 & 65535);
    r0 = (r23 & 65535);
}

loc_8088C238:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8088C2A8;
    }
}

loc_8088C23C:
{
    r0 = MemoryInline::FlatRead32((r15 + 1028));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r15 + r0);
    MemoryInline::FlatWrite32((r3 + 1032), r16);
    r0 = MemoryInline::FlatRead32((r15 + 1028));
    r0 = (r0 * 20);
    r3 = (r15 + r0);
    MemoryInline::FlatWrite32((r3 + 2076), r22);
    r0 = MemoryInline::FlatRead32((r15 + 1028));
    r0 = (r0 * 20);
    r3 = (r15 + r0);
    MemoryInline::FlatWrite32((r3 + 2080), r21);
    r0 = MemoryInline::FlatRead32((r15 + 1028));
    r0 = (r0 * 20);
    r3 = (r15 + r0);
    MemoryInline::FlatWrite8((r3 + 2084), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r15 + 1028));
    r0 = (r0 * 20);
    r3 = (r15 + r0);
    MemoryInline::FlatWrite32((r3 + 2088), r31);
    r0 = MemoryInline::FlatRead32((r15 + 1028));
    r0 = (r0 * 20);
    r3 = (r15 + r0);
    MemoryInline::FlatWrite32((r3 + 2092), r31);
    r3 = MemoryInline::FlatRead32((r15 + 1028));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r15 + 1028), r0);
}

loc_8088C2A8:
{
    r20 = (r20 + 4);
    r17 = (r17 + 1);
}

loc_8088C2B0:
{
}

loc_8088C2B4:
{
    if ((static_cast<int32_t>(r17) < static_cast<int32_t>(r19))) {
        goto loc_8088C0D0;
    }
}

loc_8088C2B8:
{
    r16 = r15;
    r18 = 0;
    goto loc_8088C32C;
}

loc_8088C2C4:
{
    r17 = r15;
    r19 = 0;
    goto loc_8088C318;
}

loc_8088C2D0:
{
    r3 = MemoryInline::FlatRead32((r17 + 1032));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8088C2E4u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r14 = (r3 & 65535);
    r3 = MemoryInline::FlatRead32((r16 + 1032));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8088C2FCu;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & 65535);
}

loc_8088C304:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r14))) {
        goto loc_8088C310;
    }
}

loc_8088C308:
{
}

loc_8088C30C:
{
    if ((static_cast<uint32_t>(r19) < static_cast<uint32_t>(r18))) {
        goto loc_8088C324;
    }
}

loc_8088C310:
{
    r17 = (r17 + 4);
    r19 = (r19 + 1);
}

loc_8088C318:
{
    r0 = MemoryInline::FlatRead32((r15 + 1028));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r19), static_cast<uint32_t>(r0));
}

loc_8088C320:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8088C2D0;
    }
}

loc_8088C324:
{
    r16 = (r16 + 4);
    r18 = (r18 + 1);
}

loc_8088C32C:
{
    r0 = MemoryInline::FlatRead32((r15 + 1028));
}

loc_8088C334:
{
    if ((static_cast<uint32_t>(r18) < static_cast<uint32_t>(r0))) {
        goto loc_8088C2C4;
    }
}

loc_8088C338:
{
    r16 = r15;
    r18 = 0;
    goto loc_8088C3AC;
}

loc_8088C344:
{
    r17 = r15;
    r19 = 0;
    goto loc_8088C398;
}

loc_8088C350:
{
    r3 = MemoryInline::FlatRead32((r17 + 4));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8088C364u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r14 = (r3 & 65535);
    r3 = MemoryInline::FlatRead32((r16 + 4));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8088C37Cu;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & 65535);
}

loc_8088C384:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r14))) {
        goto loc_8088C390;
    }
}

loc_8088C388:
{
}

loc_8088C38C:
{
    if ((static_cast<uint32_t>(r19) < static_cast<uint32_t>(r18))) {
        goto loc_8088C3A4;
    }
}

loc_8088C390:
{
    r17 = (r17 + 4);
    r19 = (r19 + 1);
}

loc_8088C398:
{
    r0 = MemoryInline::FlatRead32(r15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r19), static_cast<uint32_t>(r0));
}

loc_8088C3A0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8088C350;
    }
}

loc_8088C3A4:
{
    r16 = (r16 + 4);
    r18 = (r18 + 1);
}

loc_8088C3AC:
{
    r0 = MemoryInline::FlatRead32(r15);
}

loc_8088C3B4:
{
    if ((static_cast<uint32_t>(r18) < static_cast<uint32_t>(r0))) {
        goto loc_8088C344;
    }
}

loc_8088C3B8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 16216));
    r14 = (r3 + 88);
    r3 = r14;
    // inline leaf 0x80170C68 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r0 & 1023);
    r0 = (r3 + 1);
    r3 = (r0 & 65535);
    // end of inlined leaf 0x80170C68
    r0 = (r3 & 65535);
    MemoryInline::FlatWrite32((r15 + 2068), r0);
    r3 = r14;
    // inline leaf 0x80170C7C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r3 = (r3_rot_0 & 1023);
    r0 = (r3 + 1);
    r3 = (r0 & 65535);
    // end of inlined leaf 0x80170C7C
    r4 = MemoryInline::FlatRead32((r15 + 2068));
    r5 = (r3 & 65535);
    r0 = MemoryInline::FlatRead32((r15 + 1028));
    r3 = (r4 * r5);
    MemoryInline::FlatWrite32((r15 + 2072), r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088C3F4:
{
    MemoryInline::FlatWrite32((r15 + 2064), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088C48C;
    }
}

loc_8088C3FC:
{
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl2_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl2_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl2_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl2_cont_8051BED0;
}

loc_inl2_return:
{
}

loc_inl2_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r0 = MemoryInline::FlatRead32((r15 + 2064));
    r5 = 32;
    r4 = MemoryInline::FlatRead32((r3 + 3224));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    ctx->lr = 0x8088C414u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229E04u>(ctx);
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r15 + 2060), r3);
    r3 = 32;
    ctx->lr = 0x8088C420u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r15 + 2068));
    r7 = 5;
    r0 = MemoryInline::FlatRead32((r15 + 2072));
    r8 = 0;
    r5 = (r4 & 65535);
    MemoryInline::FlatWrite32((r15 + 2056), r3);
    r4 = MemoryInline::FlatRead32((r15 + 2060));
    r6 = (r0 & 65535);
    r9 = 0;
    r10 = 0;
    ctx->lr = 0x8088C44Cu;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801707F8u>(ctx);
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
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r6 = 0;
    r5 = 0;
    goto loc_8088C468;
}

loc_8088C458:
{
    r3 = MemoryInline::FlatRead32((r15 + 2060));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & 131070);
    r6 = (r6 + 1);
    r3_addr_7 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_7, static_cast<uint16_t>(r5));
}

loc_8088C468:
{
    r4 = MemoryInline::FlatRead32((r15 + 2064));
    r0 = (r6 & 65535);
}

loc_8088C474:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_8088C458;
    }
}

loc_8088C478:
{
    r3 = MemoryInline::FlatRead32((r15 + 2060));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8088C480:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088C498;
    }
}

loc_8088C484:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A16B8u>(ctx);
    goto loc_8088C498;
}

loc_8088C48C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r15 + 2060), r0);
    MemoryInline::FlatWrite32((r15 + 2056), r0);
}

loc_8088C498:
{
    r3 = r15;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 80u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 40));
            r15 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 48));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 64));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 72));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 80));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 84));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 88));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 92));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 96));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r1 + 100));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 104));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r1 + 108));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 76u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8088BEB4 func_8088BEB4 preserves=true fpr_mask=0x00000000
