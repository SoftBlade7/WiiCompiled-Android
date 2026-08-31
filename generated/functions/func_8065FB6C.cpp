#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065FB6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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

    goto loc_8065FB6C;

loc_8065FB6C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -224), 0, 232u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    r6 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 228u, (r1 + 228), r0);
    r7 = (r1 + 32);
    r8 = (r1 + 44);
    r9 = (r1 + 56);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 188u, (r1 + 188), r23);
        MemoryInline::WriteResolved32(guest_range_0, 192u, (r1 + 192), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r1 + 196), r25);
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r1 + 200), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 204u, (r1 + 204), r27);
        MemoryInline::WriteResolved32(guest_range_0, 208u, (r1 + 208), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 212u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 212u, (r1 + 212), r29);
        MemoryInline::WriteResolved32(guest_range_0, 216u, (r1 + 216), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 220u, (r1 + 220), r31);
    r10 = (r1 + 68);
    r11 = (r1 + 80);
    r5 = (r1 + 92);
    r0 = (r1 + 164);
    r24 = r3;
    r25 = r4;
    r3 = (r1 + 16);
    r4 = 4;
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r8);
    r8 = (r1 + 104);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r9);
    r9 = (r1 + 116);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r10);
    r10 = (r1 + 128);
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r11);
    r11 = (r1 + 140);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r1 + 80), r5);
    r5 = (r1 + 152);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r6);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r7);
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 92), r8);
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r1 + 104), r9);
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r10);
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r1 + 128), r11);
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r1 + 140), r5);
    MemoryInline::WriteResolved32(guest_range_0, 152u, (r1 + 152), r0);
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r1 + 164), r6);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r7);
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
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r0);
    r26 = 0;
    r27 = 0;
    r29 = 0x809C0000u;
    r30 = 65536;
    r23 = 0x809C0000u;
    r28 = 0x809C0000u;
    r31 = 1;
}

loc_8065FC24:
{
    r4 = MemoryInline::FlatRead32((r28 + 8408));
    r0 = (r26 & 255);
    r3 = MemoryInline::FlatRead32((r4 + 10524));
    r3 = (r3 * 88);
    r4 = (r4 + r3);
    r3 = MemoryInline::FlatRead8((r4 + 89));
}

loc_8065FC40:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(r3))) {
        goto loc_8065FCBC;
    }
}

loc_8065FC44:
{
}

loc_8065FC48:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8065FC84;
    }
}

loc_8065FC4C:
{
    r5 = MemoryInline::FlatRead32((r29 + -10424));
    r3 = MemoryInline::FlatRead16((r5 + 54));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8065FC58:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8065FC74;
    }
}

loc_8065FC5C:
{
    r4 = (r3 & 255);
    r3 = (r30 + -27664);
    r3 = (r3 * r4);
    r3 = (r5 + r3);
    r3 = (r3 + 56);
    goto loc_8065FC78;
}

loc_8065FC74:
{
    r3 = 0;
}

loc_8065FC78:
{
    r3 = (r3 + 65536);
    r5 = MemoryInline::FlatRead16((r3 + -28648));
    goto loc_8065FCF8;
}

loc_8065FC84:
{
    r5 = MemoryInline::FlatRead32((r29 + -10424));
    r3 = MemoryInline::FlatRead16((r5 + 54));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8065FC90:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8065FCAC;
    }
}

loc_8065FC94:
{
    r4 = (r3 & 255);
    r3 = (r30 + -27664);
    r3 = (r3 * r4);
    r3 = (r5 + r3);
    r3 = (r3 + 56);
    goto loc_8065FCB0;
}

loc_8065FCAC:
{
    r3 = 0;
}

loc_8065FCB0:
{
    r3 = (r3 + 65536);
    r5 = MemoryInline::FlatRead16((r3 + -28640));
    goto loc_8065FCF8;
}

loc_8065FCBC:
{
    r3 = MemoryInline::FlatRead32((r4 + 72));
    r4 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r3 = (r4 & r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065FCF4;
    }
}

loc_8065FCCC:
{
}

loc_8065FCD0:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8065FCE4;
    }
}

loc_8065FCD4:
{
    r3 = MemoryInline::FlatRead32((r23 + 8456));
    r3 = (r3 + r27);
    r5 = MemoryInline::FlatRead16((r3 + 384));
    goto loc_8065FCF8;
}

loc_8065FCE4:
{
    r3 = MemoryInline::FlatRead32((r23 + 8456));
    r3 = (r3 + r27);
    r5 = MemoryInline::FlatRead16((r3 + 386));
    goto loc_8065FCF8;
}

loc_8065FCF4:
{
    r5 = 0;
}

loc_8065FCF8:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8065FD00:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8065FD0C;
    }
}

loc_8065FD04:
{
    r4 = 0;
    goto loc_8065FD14;
}

loc_8065FD0C:
{
    r3 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
}

loc_8065FD14:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r3 = (r1 + 16);
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r5));
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
    r26 = (r26 + 1);
    r27 = (r27 + 192);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(12));
}

loc_8065FD30:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065FC24;
    }
}

loc_8065FD34:
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
    r23 = r3;
    goto loc_8065FE08;
}

loc_8065FD48:
{
    r4 = r23;
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
    r24 = r3;
    r4 = r23;
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
    r0 = MemoryInline::FlatRead16((r23 + 2));
    r3 = MemoryInline::FlatRead16((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8065FD74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065FD80;
    }
}

loc_8065FD78:
{
    r0 = 0;
    goto loc_8065FD8C;
}

loc_8065FD80:
{
    r0 = -1;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8065FD8C;
    }
}

loc_8065FD88:
{
    r0 = 1;
}

loc_8065FD8C:
{
}

loc_8065FD90:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8065FE04;
    }
}

loc_8065FD94:
{
    goto loc_8065FDC4;
}

loc_8065FD98:
{
    r0 = MemoryInline::FlatRead16((r23 + 2));
    r5 = MemoryInline::FlatRead16((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8065FDA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065FDB0;
    }
}

loc_8065FDA8:
{
    r0 = 0;
    goto loc_8065FDBC;
}

loc_8065FDB0:
{
    r0 = -1;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8065FDBC;
    }
}

loc_8065FDB8:
{
    r0 = 1;
}

loc_8065FDBC:
{
}

loc_8065FDC0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8065FDD8;
    }
}

loc_8065FDC4:
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

loc_8065FDD0:
{
    r4 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8065FD98;
    }
}

loc_8065FDD8:
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
    r26 = r3;
    r4 = r23;
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
    r4 = r26;
    r5 = r23;
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

loc_8065FE04:
{
    r23 = r24;
}

loc_8065FE08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_8065FE0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065FD48;
    }
}

loc_8065FE10:
{
    r23 = 0;
}

loc_8065FE14:
{
    r3 = (r1 + 16);
    r4 = (r23 & 65535);
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
    r23 = (r23 + 1);
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r23), static_cast<uint32_t>(12));
}

loc_8065FE2C:
{
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r0));
    r25 = (r25 + 1);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065FE14;
    }
}

loc_8065FE38:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 188), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 188));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 192));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 196));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 200));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 204));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 208));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 212));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 216));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 220));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF80007B gpr_write=0xFF800FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8065FB6C func_8065FB6C preserves=true fpr_mask=0x00000000
