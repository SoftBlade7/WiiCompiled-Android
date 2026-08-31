#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800FA774(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t xer = ctx->xer;

    goto loc_800FA774;

loc_800FA774:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8002157C (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002157C
    r23 = r4;
    r22 = r3;
    r3 = r23;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r31 = r3;
    r24 = 0;
    r30 = (r13 + -31568);
    r29 = (r13 + -31552);
    r28 = (r13 + -31560);
    r27 = (r13 + -31544);
    r26 = (r13 + -31536);
    r25 = (r13 + -31496);
    r19 = 0x80280000u;
    r20 = 0;
    goto loc_800FAD08;
}

loc_800FA7C4:
{
    r5 = MemoryInline::FlatRead8(r23);
    r21 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(38));
}

loc_800FA7D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FA874;
    }
}

loc_800FA7D4:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800FA7E0:
{
    r21 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FA83C;
    }
}

loc_800FA7E8:
{
    r0 = 1;
    goto loc_800FACF0;
}

loc_800FA7F4:
{
    r18 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r22);
    r4 = r18;
    ctx->lr = 0x800FA804u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    xer = ctx->xer;
}

loc_800FA808:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA814;
    }
}

loc_800FA80C:
{
    r0 = 0;
    goto loc_800FA82C;
}

loc_800FA814:
{
    r0 = MemoryInline::FlatRead32(r22);
}

loc_800FA81C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FA824;
    }
}

loc_800FA820:
{
    MemoryInline::FlatWrite32(r22, r3);
}

loc_800FA824:
{
    MemoryInline::FlatWrite32((r22 + 8), r18);
    r0 = 1;
}

loc_800FA82C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FA830:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FA83C;
    }
}

loc_800FA834:
{
    r0 = 0;
    goto loc_800FACF0;
}

loc_800FA83C:
{
    r5 = MemoryInline::FlatRead32((r22 + 4));
    r3 = MemoryInline::FlatRead32((r22 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r21));
}

loc_800FA84C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FA7F4;
    }
}

loc_800FA850:
{
    r0 = MemoryInline::FlatRead32(r22);
    r4 = r30;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r22 + 4));
    r0 = 1;
    r3 = (r3 + r21);
    MemoryInline::FlatWrite32((r22 + 4), r3);
    goto loc_800FACF0;
}

loc_800FA874:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(39));
}

loc_800FA878:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FA91C;
    }
}

loc_800FA87C:
{
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800FA888:
{
    r21 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FA8E4;
    }
}

loc_800FA890:
{
    r0 = 1;
    goto loc_800FACF0;
}

loc_800FA89C:
{
    r18 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r22);
    r4 = r18;
    ctx->lr = 0x800FA8ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    xer = ctx->xer;
}

loc_800FA8B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA8BC;
    }
}

loc_800FA8B4:
{
    r0 = 0;
    goto loc_800FA8D4;
}

loc_800FA8BC:
{
    r0 = MemoryInline::FlatRead32(r22);
}

loc_800FA8C4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FA8CC;
    }
}

loc_800FA8C8:
{
    MemoryInline::FlatWrite32(r22, r3);
}

loc_800FA8CC:
{
    MemoryInline::FlatWrite32((r22 + 8), r18);
    r0 = 1;
}

loc_800FA8D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FA8D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FA8E4;
    }
}

loc_800FA8DC:
{
    r0 = 0;
    goto loc_800FACF0;
}

loc_800FA8E4:
{
    r5 = MemoryInline::FlatRead32((r22 + 4));
    r3 = MemoryInline::FlatRead32((r22 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r21));
}

loc_800FA8F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FA89C;
    }
}

loc_800FA8F8:
{
    r0 = MemoryInline::FlatRead32(r22);
    r4 = r29;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r22 + 4));
    r0 = 1;
    r3 = (r3 + r21);
    MemoryInline::FlatWrite32((r22 + 4), r3);
    goto loc_800FACF0;
}

loc_800FA91C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(34));
}

loc_800FA920:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FA9C4;
    }
}

loc_800FA924:
{
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800FA930:
{
    r21 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FA98C;
    }
}

loc_800FA938:
{
    r0 = 1;
    goto loc_800FACF0;
}

loc_800FA944:
{
    r18 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r22);
    r4 = r18;
    ctx->lr = 0x800FA954u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    xer = ctx->xer;
}

loc_800FA958:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FA964;
    }
}

loc_800FA95C:
{
    r0 = 0;
    goto loc_800FA97C;
}

loc_800FA964:
{
    r0 = MemoryInline::FlatRead32(r22);
}

loc_800FA96C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FA974;
    }
}

loc_800FA970:
{
    MemoryInline::FlatWrite32(r22, r3);
}

loc_800FA974:
{
    MemoryInline::FlatWrite32((r22 + 8), r18);
    r0 = 1;
}

loc_800FA97C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FA980:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FA98C;
    }
}

loc_800FA984:
{
    r0 = 0;
    goto loc_800FACF0;
}

loc_800FA98C:
{
    r5 = MemoryInline::FlatRead32((r22 + 4));
    r3 = MemoryInline::FlatRead32((r22 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r21));
}

loc_800FA99C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FA944;
    }
}

loc_800FA9A0:
{
    r0 = MemoryInline::FlatRead32(r22);
    r4 = r28;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r22 + 4));
    r0 = 1;
    r3 = (r3 + r21);
    MemoryInline::FlatWrite32((r22 + 4), r3);
    goto loc_800FACF0;
}

loc_800FA9C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(60));
}

loc_800FA9C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FAA6C;
    }
}

loc_800FA9CC:
{
    r3 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800FA9D8:
{
    r21 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FAA34;
    }
}

loc_800FA9E0:
{
    r0 = 1;
    goto loc_800FACF0;
}

loc_800FA9EC:
{
    r18 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r22);
    r4 = r18;
    ctx->lr = 0x800FA9FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    xer = ctx->xer;
}

loc_800FAA00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FAA0C;
    }
}

loc_800FAA04:
{
    r0 = 0;
    goto loc_800FAA24;
}

loc_800FAA0C:
{
    r0 = MemoryInline::FlatRead32(r22);
}

loc_800FAA14:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FAA1C;
    }
}

loc_800FAA18:
{
    MemoryInline::FlatWrite32(r22, r3);
}

loc_800FAA1C:
{
    MemoryInline::FlatWrite32((r22 + 8), r18);
    r0 = 1;
}

loc_800FAA24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FAA28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FAA34;
    }
}

loc_800FAA2C:
{
    r0 = 0;
    goto loc_800FACF0;
}

loc_800FAA34:
{
    r5 = MemoryInline::FlatRead32((r22 + 4));
    r3 = MemoryInline::FlatRead32((r22 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r21));
}

loc_800FAA44:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FA9EC;
    }
}

loc_800FAA48:
{
    r0 = MemoryInline::FlatRead32(r22);
    r4 = r27;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r22 + 4));
    r0 = 1;
    r3 = (r3 + r21);
    MemoryInline::FlatWrite32((r22 + 4), r3);
    goto loc_800FACF0;
}

loc_800FAA6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(62));
}

loc_800FAA70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FAB14;
    }
}

loc_800FAA74:
{
    r3 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800FAA80:
{
    r21 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FAADC;
    }
}

loc_800FAA88:
{
    r0 = 1;
    goto loc_800FACF0;
}

loc_800FAA94:
{
    r18 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r22);
    r4 = r18;
    ctx->lr = 0x800FAAA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    xer = ctx->xer;
}

loc_800FAAA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FAAB4;
    }
}

loc_800FAAAC:
{
    r0 = 0;
    goto loc_800FAACC;
}

loc_800FAAB4:
{
    r0 = MemoryInline::FlatRead32(r22);
}

loc_800FAABC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FAAC4;
    }
}

loc_800FAAC0:
{
    MemoryInline::FlatWrite32(r22, r3);
}

loc_800FAAC4:
{
    MemoryInline::FlatWrite32((r22 + 8), r18);
    r0 = 1;
}

loc_800FAACC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FAAD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FAADC;
    }
}

loc_800FAAD4:
{
    r0 = 0;
    goto loc_800FACF0;
}

loc_800FAADC:
{
    r5 = MemoryInline::FlatRead32((r22 + 4));
    r3 = MemoryInline::FlatRead32((r22 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r21));
}

loc_800FAAEC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FAA94;
    }
}

loc_800FAAF0:
{
    r0 = MemoryInline::FlatRead32(r22);
    r4 = r26;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r22 + 4));
    r0 = 1;
    r3 = (r3 + r21);
    MemoryInline::FlatWrite32((r22 + 4), r3);
    goto loc_800FACF0;
}

loc_800FAB14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(32));
}

loc_800FAB18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FABBC;
    }
}

loc_800FAB1C:
{
    r3 = r25;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800FAB28:
{
    r21 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FAB84;
    }
}

loc_800FAB30:
{
    r0 = 1;
    goto loc_800FACF0;
}

loc_800FAB3C:
{
    r18 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r22);
    r4 = r18;
    ctx->lr = 0x800FAB4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    xer = ctx->xer;
}

loc_800FAB50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FAB5C;
    }
}

loc_800FAB54:
{
    r0 = 0;
    goto loc_800FAB74;
}

loc_800FAB5C:
{
    r0 = MemoryInline::FlatRead32(r22);
}

loc_800FAB64:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FAB6C;
    }
}

loc_800FAB68:
{
    MemoryInline::FlatWrite32(r22, r3);
}

loc_800FAB6C:
{
    MemoryInline::FlatWrite32((r22 + 8), r18);
    r0 = 1;
}

loc_800FAB74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FAB78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FAB84;
    }
}

loc_800FAB7C:
{
    r0 = 0;
    goto loc_800FACF0;
}

loc_800FAB84:
{
    r5 = MemoryInline::FlatRead32((r22 + 4));
    r3 = MemoryInline::FlatRead32((r22 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r21));
}

loc_800FAB94:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FAB3C;
    }
}

loc_800FAB98:
{
    r0 = MemoryInline::FlatRead32(r22);
    r4 = r25;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r22 + 4));
    r0 = 1;
    r3 = (r3 + r21);
    MemoryInline::FlatWrite32((r22 + 4), r3);
    goto loc_800FACF0;
}

loc_800FABBC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800FABC8;
    }
}

loc_800FABC0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(127));
}

loc_800FABC4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FAC7C;
    }
}

loc_800FABC8:
{
    r3 = (r1 + 8);
    r4 = (r19 + -20752);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800FABD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    xer = ctx->xer;
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r20));
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800FABE8:
{
    r21 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FAC44;
    }
}

loc_800FABF0:
{
    r0 = 1;
    goto loc_800FACF0;
}

loc_800FABFC:
{
    r18 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r22);
    r4 = r18;
    ctx->lr = 0x800FAC0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    xer = ctx->xer;
}

loc_800FAC10:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FAC1C;
    }
}

loc_800FAC14:
{
    r0 = 0;
    goto loc_800FAC34;
}

loc_800FAC1C:
{
    r0 = MemoryInline::FlatRead32(r22);
}

loc_800FAC24:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FAC2C;
    }
}

loc_800FAC28:
{
    MemoryInline::FlatWrite32(r22, r3);
}

loc_800FAC2C:
{
    MemoryInline::FlatWrite32((r22 + 8), r18);
    r0 = 1;
}

loc_800FAC34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FAC38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FAC44;
    }
}

loc_800FAC3C:
{
    r0 = 0;
    goto loc_800FACF0;
}

loc_800FAC44:
{
    r5 = MemoryInline::FlatRead32((r22 + 4));
    r3 = MemoryInline::FlatRead32((r22 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r21));
}

loc_800FAC54:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800FABFC;
    }
}

loc_800FAC58:
{
    r0 = MemoryInline::FlatRead32(r22);
    r4 = (r1 + 8);
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r22 + 4));
    r0 = 1;
    r3 = (r3 + r21);
    MemoryInline::FlatWrite32((r22 + 4), r3);
    goto loc_800FACF0;
}

loc_800FAC7C:
{
    r3 = MemoryInline::FlatRead32((r22 + 8));
    r0 = MemoryInline::FlatRead32((r22 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800FAC88:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800FACD4;
    }
}

loc_800FAC8C:
{
    r18 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r22);
    r4 = r18;
    ctx->lr = 0x800FAC9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    xer = ctx->xer;
}

loc_800FACA0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800FACAC;
    }
}

loc_800FACA4:
{
    r0 = 0;
    goto loc_800FACC4;
}

loc_800FACAC:
{
    r0 = MemoryInline::FlatRead32(r22);
}

loc_800FACB4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800FACBC;
    }
}

loc_800FACB8:
{
    MemoryInline::FlatWrite32(r22, r3);
}

loc_800FACBC:
{
    MemoryInline::FlatWrite32((r22 + 8), r18);
    r0 = 1;
}

loc_800FACC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FACC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FACD4;
    }
}

loc_800FACCC:
{
    r0 = 0;
    goto loc_800FACF0;
}

loc_800FACD4:
{
    r4 = MemoryInline::FlatRead32(r22);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r22 + 4));
    r4_addr_2 = (r4 + r3);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r21));
    r3 = MemoryInline::FlatRead32((r22 + 4));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r22 + 4), r3);
}

loc_800FACF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FACF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FAD00;
    }
}

loc_800FACF8:
{
    r3 = 0;
    goto loc_800FAD14;
}

loc_800FAD00:
{
    r24 = (r24 + 1);
    r23 = (r23 + 1);
}

loc_800FAD08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r31));
}

loc_800FAD0C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800FA7C4;
    }
}

loc_800FAD10:
{
    r3 = 1;
}

loc_800FAD14:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215C8 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800FA774 func_800FA774 preserves=true fpr_mask=0x00000000
