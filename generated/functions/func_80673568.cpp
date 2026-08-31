#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80673568(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r5_stbu_ea_0 = 0;
    uint32_t r5_stbu_ea_1 = 0;
    uint32_t r5_stbu_ea_2 = 0;
    uint32_t r5_stbu_ea_3 = 0;
    uint32_t r5_stbu_ea_4 = 0;
    uint32_t r5_stbu_ea_5 = 0;
    uint32_t r5_stbu_ea_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_80673568;

loc_80673568:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -736), 0, 744u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -736), r1);
    r1 = (r1 + -736);
    r0 = ctx->lr;
    r5 = 0x808B0000u;
    MemoryInline::WriteResolved32(guest_range_0, 740u, (r1 + 740), r0);
    r5 = (r5 + 11400);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 668u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_0, 668u, (r1 + 668), r15);
        MemoryInline::WriteResolved32(guest_range_0, 672u, (r1 + 672), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 676u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 676u, (r1 + 676), r17);
        MemoryInline::WriteResolved32(guest_range_0, 680u, (r1 + 680), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 684u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 684u, (r1 + 684), r19);
        MemoryInline::WriteResolved32(guest_range_0, 688u, (r1 + 688), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 692u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 692u, (r1 + 692), r21);
        MemoryInline::WriteResolved32(guest_range_0, 696u, (r1 + 696), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 700u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 700u, (r1 + 700), r23);
        MemoryInline::WriteResolved32(guest_range_0, 704u, (r1 + 704), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 708u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 708u, (r1 + 708), r25);
        MemoryInline::WriteResolved32(guest_range_0, 712u, (r1 + 712), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 716u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 716u, (r1 + 716), r27);
        MemoryInline::WriteResolved32(guest_range_0, 720u, (r1 + 720), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 724u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 724u, (r1 + 724), r29);
        MemoryInline::WriteResolved32(guest_range_0, 728u, (r1 + 728), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 732u, (r1 + 732), r31);
    r16 = r3;
    r17 = r4;
    r3 = (r1 + 216);
    r4 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r1 + 208), r5);
    r5 = 448;
    ctx->lr = 0x8067359Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808B0000u;
    r26 = 0;
    r25 = (r3 + 11588);
    MemoryInline::FlatWriteRam32((r1 + 184), r25);
    r3 = (r1 + 108);
    r4 = (r17 + 968);
    MemoryInline::FlatWriteRam16((r1 + 188), static_cast<uint16_t>(r26));
    r5 = 76;
    MemoryInline::FlatWriteRam8((r1 + 190), static_cast<uint8_t>(r26));
    MemoryInline::FlatWriteRam16((r1 + 192), static_cast<uint16_t>(r26));
    MemoryInline::FlatWriteRam8((r1 + 194), static_cast<uint8_t>(r26));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = 65536;
    r20 = 0;
    r28 = (r29 + -29504);
    r30 = 1;
    r31 = 38;
    r27 = 0x809C0000u;
}

loc_806735E4:
{
    r4 = (r20 & 255);
    r5 = MemoryInline::FlatRead32((r27 + -10424));
    r0 = (r28 * r4);
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -1380646912);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20548));
}

loc_80673604:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806738AC;
    }
}

loc_80673608:
{
    r0 = (r29 + -27664);
    r19 = 0;
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r24 = (r3 + 56);
    r23 = (r24 + 22984);
}

loc_80673620:
{
    r0 = (r19 & 65535);
    r3 = (r1 + 208);
    r21 = (r0 * 448);
    r4 = (r24 + r21);
    r4 = (r4 + 22992);
    ctx->lr = 0x80673638u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805196B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8067363C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806738A0;
    }
}

loc_80673640:
{
    r4 = MemoryInline::FlatRead16((r1 + 232));
    r3 = (r23 + 13448);
    r0 = (r4 & 1);
}

loc_8067364C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80673658;
    }
}

loc_80673650:
{
    r0 = 0;
    goto loc_80673668;
}

loc_80673658:
{
    r0 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8067365C:
{
    r0 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80673668;
    }
}

loc_80673664:
{
    r0 = 1;
}

loc_80673668:
{
}

loc_8067366C:
{
    r18 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80673690;
    }
}

loc_80673674:
{
    r0 = MemoryInline::FlatRead8((r1 + 318));
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    // inline leaf 0x800EB870 (9 guest instruction(s))
}

loc_inl0_0x800EB870:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r0 = (r0_rot_3 & 3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r3 = (r3_rot_3 & 2097151);
}

loc_inl0_0x800EB880:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_inl0_0x800EB88C;
    }
}

loc_inl0_0x800EB884:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r3 = (r3_rot_4 & 1);
    goto loc_inl0_cont_800EB870;
}

loc_inl0_0x800EB88C:
{
    r3 = 0;
}

loc_inl0_cont_800EB870:
{
    // end of inlined leaf 0x800EB870
}

loc_80673688:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80673690;
    }
}

loc_8067368C:
{
    r18 = 1;
}

loc_80673690:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(0));
}

loc_80673694:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806738A0;
    }
}

loc_80673698:
{
    r3 = (r1 + 208);
    r4 = (r17 + 1048);
    ctx->lr = 0x806736A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80519A00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806736A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806738A0;
    }
}

loc_806736AC:
{
    r22 = r17;
    r18 = 0;
}

loc_806736B4:
{
    r0 = MemoryInline::FlatRead8((r22 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806736BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806737C4;
    }
}

loc_806736C0:
{
    MemoryInline::FlatWriteRam32((r1 + 84), r25);
    r5 = r18;
    r3 = (r1 + 208);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam16((r1 + 88), static_cast<uint16_t>(r26));
    MemoryInline::FlatWriteRam8((r1 + 90), static_cast<uint8_t>(r26));
    MemoryInline::FlatWriteRam16((r1 + 92), static_cast<uint16_t>(r26));
    MemoryInline::FlatWriteRam8((r1 + 94), static_cast<uint8_t>(r26));
    ctx->lr = 0x806736E4u;
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
    InvokeDirectCpu<0x80519780u>(ctx);
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
    r0 = MemoryInline::FlatRead8((r1 + 94));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806736EC:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_8067376C;
    }
}

loc_806736F0:
{
    r0 = MemoryInline::FlatRead8((r22 + 10));
}

loc_806736F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80673704;
    }
}

loc_806736FC:
{
    r0 = 0;
    goto loc_80673764;
}

loc_80673704:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80673710;
    }
}

loc_80673708:
{
    r0 = 1;
    goto loc_80673764;
}

loc_80673710:
{
    r0 = MemoryInline::FlatRead16((r1 + 88));
    r3 = MemoryInline::FlatRead16((r22 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8067371C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80673728;
    }
}

loc_80673720:
{
    r0 = 1;
    goto loc_80673764;
}

loc_80673728:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80673760;
    }
}

loc_8067372C:
{
    r0 = MemoryInline::FlatRead8((r1 + 90));
    r3 = MemoryInline::FlatRead8((r22 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80673738:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80673744;
    }
}

loc_8067373C:
{
    r0 = 1;
    goto loc_80673764;
}

loc_80673744:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80673760;
    }
}

loc_80673748:
{
    r3 = MemoryInline::FlatRead16((r22 + 8));
    r0 = MemoryInline::FlatRead16((r1 + 92));
}

loc_80673754:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80673760;
    }
}

loc_80673758:
{
    r0 = 1;
    goto loc_80673764;
}

loc_80673760:
{
    r0 = 0;
}

loc_80673764:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80673768:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067377C;
    }
}

loc_8067376C:
{
    r3 = MemoryInline::FlatRead32((r16 + 31220));
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r18));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r16 + 31220), r0);
}

loc_8067377C:
{
    r0 = MemoryInline::FlatRead16((r22 + 4));
    r5 = r18;
    MemoryInline::FlatWriteRam16((r1 + 188), static_cast<uint16_t>(r0));
    r3 = (r1 + 208);
    r4 = (r1 + 108);
    r0 = MemoryInline::FlatRead8((r22 + 6));
    MemoryInline::FlatWriteRam8((r1 + 190), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r22 + 8));
    MemoryInline::FlatWriteRam16((r1 + 192), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r22 + 10));
    MemoryInline::FlatWriteRam8((r1 + 194), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r22 + 12));
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    r0 = MemoryInline::FlatRead32((r22 + 16));
    MemoryInline::FlatWriteRam32((r1 + 200), r0);
    r0 = MemoryInline::FlatRead32((r22 + 20));
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    ctx->lr = 0x806737C4u;
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
    InvokeDirectCpu<0x8051986Cu>(ctx);
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
}

loc_806737C4:
{
    r18 = (r18 + 1);
    r22 = (r22 + 24);
}

loc_806737D0:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(32))) {
        goto loc_806736B4;
    }
}

loc_806737D4:
{
    r18 = r17;
    r22 = (r17 + 772);
    r15 = 0;
}

loc_806737E0:
{
    r4 = MemoryInline::FlatRead32((r18 + 768));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_806737E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806737FC;
    }
}

loc_806737EC:
{
    r6 = MemoryInline::FlatRead32((r18 + 784));
    r5 = r22;
    r3 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80519B1Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_806737FC:
{
    r15 = (r15 + 1);
    r22 = (r22 + 20);
}

loc_80673808:
{
    r18 = (r18 + 20);
    if ((static_cast<int32_t>(r15) < static_cast<int32_t>(10))) {
        goto loc_806737E0;
    }
}

loc_80673810:
{
    r5 = (r1 + 241);
    r4 = (r17 + 967);
    ctr = r31;
}

loc_8067381C:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r5_stbu_ea_4 = (r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_4, static_cast<uint8_t>(r0));
    r5 = r5_stbu_ea_4;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8067381C;
    }
}

loc_80673830:
{
    r3 = MemoryInline::FlatRead16((r17 + 1064));
}

loc_80673838:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(9999))) {
        goto loc_80673840;
    }
}

loc_8067383C:
{
    r3 = 9999;
}

loc_80673840:
{
    r0 = (r3 & 65535);
}

loc_80673848:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_80673850;
    }
}

loc_8067384C:
{
    r3 = 1;
}

loc_80673850:
{
    MemoryInline::FlatWriteRam16((r1 + 238), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r17 + 1066));
}

loc_8067385C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(9999))) {
        goto loc_80673864;
    }
}

loc_80673860:
{
    r3 = 9999;
}

loc_80673864:
{
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8067386C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80673874;
    }
}

loc_80673870:
{
    r3 = 1;
}

loc_80673874:
{
    MemoryInline::FlatWriteRam16((r1 + 240), static_cast<uint16_t>(r3));
    r4 = (r24 + r21);
    r3 = (r1 + 208);
    r0 = MemoryInline::FlatRead32((r17 + 1056));
    r4 = (r4 + 22992);
    MemoryInline::FlatWriteRam32((r1 + 320), r0);
    r0 = MemoryInline::FlatRead16((r17 + 1060));
    MemoryInline::FlatWriteRam16((r1 + 324), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r17 + 1062));
    MemoryInline::FlatWriteRam16((r1 + 326), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805196F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806738A0:
{
    r19 = (r19 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(30));
}

loc_806738A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80673620;
    }
}

loc_806738AC:
{
    r20 = (r20 + 1);
    r16 = (r16 + 4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r20), static_cast<uint32_t>(4));
}

loc_806738B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806735E4;
    }
}

loc_806738BC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 668), 0, 76u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 668));
            r16 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 672));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 676));
            r18 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 680));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 684));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 688));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 692));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 696));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 700));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 704));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 708));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 712));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 716));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 720));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 724));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r1 + 728));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 732));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r1 + 740));
    ctx->lr = r0;
    r1 = (r1 + 736);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFF87FB gpr_write=0xFFFF87FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80673568 func_80673568 preserves=true fpr_mask=0x00000000
