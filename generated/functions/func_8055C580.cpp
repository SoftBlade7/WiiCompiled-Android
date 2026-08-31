#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055C580(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t xer = ctx->xer;

    goto loc_8055C580;

loc_8055C580:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r20);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r22);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r26);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r28);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r30);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r31);
    }
    r26 = r5;
    r5 = r7;
    r27 = r8;
    r7 = r4;
    r8 = r6;
    r25 = r3;
    r28 = r9;
    r4 = 3;
    r6 = 0;
    ctx->lr = 0x8055C5B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x8055BAA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r25 + 60));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8055C5C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055C5D4;
    }
}

loc_8055C5C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8055C5CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055C5E0;
    }
}

loc_8055C5D0:
{
    goto loc_8055C5EC;
}

loc_8055C5D4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6224));
    goto loc_8055C5EC;
}

loc_8055C5E0:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 6224);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8055C5EC:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r3 = 28;
    r5 = 4;
    ctx->lr = 0x8055C5FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8055C600:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055C618;
    }
}

loc_8055C608:
{
    r4 = r25;
    r5 = r26;
    ctx->lr = 0x8055C614u;
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
    InvokeDirectCpu<0x8056022Cu>(ctx);
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
    r31 = r3;
}

loc_8055C618:
{
    r21 = 0x80890000u;
    r24 = 0x805B0000u;
    r23 = 0x805B0000u;
    r22 = 0x805B0000u;
    r30 = r25;
    r21 = (r21 + 5044);
    r24 = (r24 + 668);
    r23 = (r23 + 180);
    r22 = (r22 + -376);
    r29 = 0;
}

loc_8055C640:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8055C64C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8055C658;
    }
}

loc_8055C650:
{
    r20 = MemoryInline::FlatRead32(r3);
    goto loc_8055C65C;
}

loc_8055C658:
{
    r20 = 0;
}

loc_8055C65C:
{
    r3 = r20;
    r4 = 0;
    // inline leaf 0x802443C8 (7 guest instruction(s))
}

loc_inl0_0x802443C8:
{
}

loc_inl0_0x802443CC:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(127))) {
        goto loc_inl0_0x802443DC;
    }
}

loc_inl0_0x802443D0:
{
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 241), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_802443C8;
}

loc_inl0_0x802443DC:
{
    MemoryInline::FlatWrite8((r3 + 241), static_cast<uint8_t>(r4));
}

loc_inl0_cont_802443C8:
{
    // end of inlined leaf 0x802443C8
}

loc_8055C66C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(0))) {
        goto loc_8055C6A0;
    }
}

loc_8055C670:
{
    r3 = MemoryInline::FlatRead32((r26 + 64));
}

loc_8055C678:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055C690;
    }
}

loc_8055C67C:
{
    r4 = MemoryInline::FlatRead8((r3 + 16));
    r3 = r20;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    // inline leaf 0x802443AC (7 guest instruction(s))
}

loc_inl1_0x802443AC:
{
}

loc_inl1_0x802443B0:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(127))) {
        goto loc_inl1_0x802443C0;
    }
}

loc_inl1_0x802443B4:
{
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 240), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_802443AC;
}

loc_inl1_0x802443C0:
{
    MemoryInline::FlatWrite8((r3 + 240), static_cast<uint8_t>(r4));
}

loc_inl1_cont_802443AC:
{
    // end of inlined leaf 0x802443AC
    goto loc_8055C6AC;
}

loc_8055C690:
{
    r3 = r20;
    r4 = 0;
    // inline leaf 0x802443AC (7 guest instruction(s))
}

loc_inl2_0x802443AC:
{
}

loc_inl2_0x802443B0:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(127))) {
        goto loc_inl2_0x802443C0;
    }
}

loc_inl2_0x802443B4:
{
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 240), static_cast<uint8_t>(r0));
    goto loc_inl2_cont_802443AC;
}

loc_inl2_0x802443C0:
{
    MemoryInline::FlatWrite8((r3 + 240), static_cast<uint8_t>(r4));
}

loc_inl2_cont_802443AC:
{
    // end of inlined leaf 0x802443AC
    goto loc_8055C6AC;
}

loc_8055C6A0:
{
    r3 = r20;
    r4 = 0;
    // inline leaf 0x802443AC (7 guest instruction(s))
}

loc_inl3_0x802443AC:
{
}

loc_inl3_0x802443B0:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(127))) {
        goto loc_inl3_0x802443C0;
    }
}

loc_inl3_0x802443B4:
{
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 240), static_cast<uint8_t>(r0));
    goto loc_inl3_cont_802443AC;
}

loc_inl3_0x802443C0:
{
    MemoryInline::FlatWrite8((r3 + 240), static_cast<uint8_t>(r4));
}

loc_inl3_cont_802443AC:
{
    // end of inlined leaf 0x802443AC
}

loc_8055C6AC:
{
    r4 = MemoryInline::FlatRead8((r21 + 1));
}

loc_8055C6B4:
{
    r3 = MemoryInline::FlatRead8((r21 + 2));
    r0 = MemoryInline::FlatRead8((r21 + 3));
    r5 = MemoryInline::FlatRead8(r21);
    MemoryInline::FlatWrite8((r20 + 244), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r20 + 245), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r20 + 246), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r20 + 247), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8055C6F8;
    }
}

loc_8055C6E4:
{
}

loc_8055C6E8:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(1))) {
        goto loc_8055C700;
    }
}

loc_8055C6EC:
{
}

loc_8055C6F0:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(2))) {
        goto loc_8055C708;
    }
}

loc_8055C6F4:
{
    goto loc_8055C70C;
}

loc_8055C6F8:
{
    MemoryInline::FlatWrite32((r20 + 264), r22);
    goto loc_8055C70C;
}

loc_8055C700:
{
    MemoryInline::FlatWrite32((r20 + 264), r23);
    goto loc_8055C70C;
}

loc_8055C708:
{
    MemoryInline::FlatWrite32((r20 + 264), r24);
}

loc_8055C70C:
{
    r29 = (r29 + 1);
    r30 = (r30 + 4);
}

loc_8055C718:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(2))) {
        goto loc_8055C640;
    }
}

loc_8055C71C:
{
    r4 = MemoryInline::FlatRead32((r26 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8055C724:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055C780;
    }
}

loc_8055C728:
{
    MemoryInline::FlatWrite32((r25 + 64), r4);
    r3 = r25;
    r4 = MemoryInline::FlatRead8((r4 + 16));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->lr = 0x8055C73Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055D920u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r20 = r25;
    r21 = 0;
}

loc_8055C744:
{
    r5 = MemoryInline::FlatRead32((r20 + 20));
    r3 = MemoryInline::FlatRead32((r25 + 64));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r3 = MemoryInline::FlatRead8((r3 + 16));
}

loc_8055C758:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8055C768;
    }
}

loc_8055C760:
{
    r3 = MemoryInline::FlatRead32(r5);
    goto loc_8055C76C;
}

loc_8055C768:
{
    r3 = 0;
}

loc_8055C76C:
{
    // inline leaf 0x802443AC (7 guest instruction(s))
}

loc_inl4_0x802443AC:
{
}

loc_inl4_0x802443B0:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(127))) {
        goto loc_inl4_0x802443C0;
    }
}

loc_inl4_0x802443B4:
{
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 240), static_cast<uint8_t>(r0));
    goto loc_inl4_cont_802443AC;
}

loc_inl4_0x802443C0:
{
    MemoryInline::FlatWrite8((r3 + 240), static_cast<uint8_t>(r4));
}

loc_inl4_cont_802443AC:
{
    // end of inlined leaf 0x802443AC
    r21 = (r21 + 1);
    r20 = (r20 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(2));
}

loc_8055C77C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8055C744;
    }
}

loc_8055C780:
{
    r0 = MemoryInline::FlatRead32((r26 + 12));
    r4 = 0x80890000u;
    r4 = (r4 + 5056);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 8);
    r4 = (r4 + 9);
    ctx->lr = 0x8055C79Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E2A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8055C7A0:
{
    r25 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055C7DC;
    }
}

loc_8055C7A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8055C7C8;
    }
}

loc_8055C7AC:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 18768);
    r4 = 175;
    r5 = (r5 + 18736);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8055C7C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    xer = ctx->xer;
}

loc_8055C7C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_8055C7CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055C7DC;
    }
}

loc_8055C7D0:
{
    r0 = MemoryInline::FlatRead32((r25 + 20));
    r0 = (r0 & -257);
    MemoryInline::FlatWriteRam32((r25 + 20), r0);
}

loc_8055C7DC:
{
    r3 = r31;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 16));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 24));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 40));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 48));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 56));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 60));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8055C580 func_8055C580 preserves=true fpr_mask=0x00000000
