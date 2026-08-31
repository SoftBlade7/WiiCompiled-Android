#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80015680(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80015680;

loc_80015680:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r6 = 0;
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = (r3 + 2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(37));
}

loc_800156A4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 40), r30);
    r30 = r5;
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 36), r29);
    r29 = r4;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r1 + 8), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r1 + 9), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r1 + 10), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r1 + 11), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r1 + 12), static_cast<uint8_t>(r6));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 16), r6);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r6);
    }
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800156F8;
    }
}

loc_800156D4:
{
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r3 = (r31 + 2);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32((r5 + 8), r6);
    MemoryInline::FlatWrite32((r5 + 12), r6);
    goto loc_80015BF4;
}

loc_800156F8:
{
    r3 = 2;
}

loc_800156FC:
{
}

loc_80015700:
{
    r5 = 1;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(45))) {
        goto loc_8001572C;
    }
}

loc_80015708:
{
}

loc_8001570C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(43))) {
        goto loc_80015734;
    }
}

loc_80015710:
{
}

loc_80015714:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_8001573C;
    }
}

loc_80015718:
{
}

loc_8001571C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(35))) {
        goto loc_80015750;
    }
}

loc_80015720:
{
}

loc_80015724:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_80015758;
    }
}

loc_80015728:
{
    goto loc_8001576C;
}

loc_8001572C:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r6));
    goto loc_80015770;
}

loc_80015734:
{
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r7));
    goto loc_80015770;
}

loc_8001573C:
{
    r4 = MemoryInline::FlatRead8((r1 + 9));
}

loc_80015744:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_80015770;
    }
}

loc_80015748:
{
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    goto loc_80015770;
}

loc_80015750:
{
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r7));
    goto loc_80015770;
}

loc_80015758:
{
    r4 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80015760:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80015770;
    }
}

loc_80015764:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    goto loc_80015770;
}

loc_8001576C:
{
    r5 = 0;
}

loc_80015770:
{
}

loc_80015774:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80015780;
    }
}

loc_80015778:
{
    r31 = (r31 + 2);
    r0 = MemoryInline::FlatRead16(r31);
    goto loc_800156FC;
}

loc_80015780:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(42));
}

loc_80015784:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800157BC;
    }
}

loc_80015788:
{
    r3 = r29;
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021270u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
}

loc_800157A0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800157B4;
    }
}

loc_800157A4:
{
    r0 = (0 - r0);
    r3 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
}

loc_800157B4:
{
    r31 = (r31 + 2);
    r0 = MemoryInline::FlatRead16(r31);
    goto loc_8001580C;
}

loc_800157BC:
{
    r3 = 0x80270000u;
    r3 = (r3 + 4424);
    r5 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_800157E4;
}

loc_800157CC:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r3 = (r3 * 10);
    r3 = (r0 + r3);
    r31 = (r31 + 2);
    r0 = MemoryInline::FlatRead16(r31);
    r3 = (r3 + -48);
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
}

loc_800157E4:
{
}

loc_800157E8:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(256))) {
        goto loc_80015800;
    }
}

loc_800157EC:
{
    r4 = MemoryInline::FlatRead32((r5 + 20));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 131070);
    r4_addr_2 = (r4 + r3);
    r3 = MemoryInline::FlatRead16(r4_addr_2);
    r3 = (r3 & 8);
    goto loc_80015804;
}

loc_80015800:
{
    r3 = 0;
}

loc_80015804:
{
}

loc_80015808:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800157CC;
    }
}

loc_8001580C:
{
    r6 = MemoryInline::FlatRead32((r1 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(509));
}

loc_80015814:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80015848;
    }
}

loc_80015818:
{
    r3 = 65536;
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = (r31 + 2);
    r4 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32(r30, r5);
    MemoryInline::FlatWrite32((r30 + 4), r4);
    MemoryInline::FlatWrite32((r30 + 8), r6);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    goto loc_80015BF4;
}

loc_80015848:
{
}

loc_8001584C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(46))) {
        goto loc_800158E0;
    }
}

loc_80015850:
{
    r31 = (r31 + 2);
    r0 = MemoryInline::FlatRead16(r31);
    r3 = 1;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(42));
}

loc_80015860:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015890;
    }
}

loc_80015864:
{
    r3 = r29;
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021270u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_8001587C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80015888;
    }
}

loc_80015880:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
}

loc_80015888:
{
    r31 = (r31 + 2);
    r0 = MemoryInline::FlatRead16(r31);
    goto loc_800158E0;
}

loc_80015890:
{
    r3 = 0x80270000u;
    r3 = (r3 + 4424);
    r5 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_800158B8;
}

loc_800158A0:
{
    r3 = MemoryInline::FlatRead32((r1 + 20));
    r3 = (r3 * 10);
    r3 = (r0 + r3);
    r31 = (r31 + 2);
    r0 = MemoryInline::FlatRead16(r31);
    r3 = (r3 + -48);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
}

loc_800158B8:
{
}

loc_800158BC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(256))) {
        goto loc_800158D4;
    }
}

loc_800158C0:
{
    r4 = MemoryInline::FlatRead32((r5 + 20));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 131070);
    r4_addr_6 = (r4 + r3);
    r3 = MemoryInline::FlatRead16(r4_addr_6);
    r3 = (r3 & 8);
    goto loc_800158D8;
}

loc_800158D4:
{
    r3 = 0;
}

loc_800158D8:
{
}

loc_800158DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800158A0;
    }
}

loc_800158E0:
{
}

loc_800158E4:
{
    r5 = 1;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(104))) {
        goto loc_80015918;
    }
}

loc_800158EC:
{
}

loc_800158F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(108))) {
        goto loc_80015940;
    }
}

loc_800158F4:
{
}

loc_800158F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(76))) {
        goto loc_80015968;
    }
}

loc_800158FC:
{
}

loc_80015900:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(106))) {
        goto loc_80015974;
    }
}

loc_80015904:
{
}

loc_80015908:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(116))) {
        goto loc_80015980;
    }
}

loc_8001590C:
{
}

loc_80015910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(122))) {
        goto loc_8001598C;
    }
}

loc_80015914:
{
    goto loc_80015998;
}

loc_80015918:
{
    r3 = MemoryInline::FlatRead16((r31 + 2));
    r4 = 2;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r4));
}

loc_80015928:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(104))) {
        goto loc_8001599C;
    }
}

loc_8001592C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r0 = r3;
    r31 = (r31 + 2);
    goto loc_8001599C;
}

loc_80015940:
{
    r3 = MemoryInline::FlatRead16((r31 + 2));
    r4 = 3;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r4));
}

loc_80015950:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(108))) {
        goto loc_8001599C;
    }
}

loc_80015954:
{
    r0 = 4;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r0 = r3;
    r31 = (r31 + 2);
    goto loc_8001599C;
}

loc_80015968:
{
    r3 = 9;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    goto loc_8001599C;
}

loc_80015974:
{
    r3 = 6;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    goto loc_8001599C;
}

loc_80015980:
{
    r3 = 8;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    goto loc_8001599C;
}

loc_8001598C:
{
    r3 = 7;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    goto loc_8001599C;
}

loc_80015998:
{
    r5 = 0;
}

loc_8001599C:
{
}

loc_800159A0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800159A8;
    }
}

loc_800159A4:
{
    r31 = (r31 + 2);
    r0 = MemoryInline::FlatRead16(r31);
}

loc_800159A8:
{
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    r0 = (r3 + -65);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(55));
}

loc_800159B8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80015BC4;
    }
}

loc_800159BC:
{
    r3 = 0x80270000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 5680);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80015A64u:
        goto loc_80015A64;
        break;
    case 0x80015BC4u:
        goto loc_80015BC4;
        break;
    case 0x80015AC8u:
        goto loc_80015AC8;
        break;
    case 0x80015A18u:
        goto loc_80015A18;
        break;
    case 0x80015AB4u:
        goto loc_80015AB4;
        break;
    case 0x800159D4u:
        goto loc_800159D4;
        break;
    case 0x80015B40u:
        goto loc_80015B40;
        break;
    case 0x80015BACu:
        goto loc_80015BAC;
        break;
    case 0x80015B1Cu:
        goto loc_80015B1C;
        break;
    case 0x80015B7Cu:
        goto loc_80015B7C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_800159D4:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
}

loc_800159DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_800159E8;
    }
}

loc_800159E0:
{
    r0 = 4;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
}

loc_800159E8:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800159F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015A00;
    }
}

loc_800159F4:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_80015BD0;
}

loc_80015A00:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80015A08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015BD0;
    }
}

loc_80015A0C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    goto loc_80015BD0;
}

loc_80015A18:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (r3 + 250);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80015A28:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80015A3C;
    }
}

loc_80015A2C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
}

loc_80015A30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80015A3C;
    }
}

loc_80015A34:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
}

loc_80015A38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015A4C;
    }
}

loc_80015A3C:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80015BD0;
}

loc_80015A4C:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80015A54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015BD0;
    }
}

loc_80015A58:
{
    r0 = 6;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_80015BD0;
}

loc_80015A64:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
}

loc_80015A6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80015A78;
    }
}

loc_80015A70:
{
    r0 = 13;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_80015A78:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (r3 + 250);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80015A88:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80015AA4;
    }
}

loc_80015A8C:
{
    r0 = (r3 + 255);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80015A98:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80015AA4;
    }
}

loc_80015A9C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
}

loc_80015AA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015BD0;
    }
}

loc_80015AA4:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80015BD0;
}

loc_80015AB4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_80015ABC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80015AC8;
    }
}

loc_80015AC0:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_80015AC8:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (r3 + 250);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80015AD8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80015AF4;
    }
}

loc_80015ADC:
{
    r0 = (r3 + 255);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80015AE8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80015AF4;
    }
}

loc_80015AEC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
}

loc_80015AF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015B04;
    }
}

loc_80015AF4:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80015BD0;
}

loc_80015B04:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80015B0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015BD0;
    }
}

loc_80015B10:
{
    r0 = 6;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_80015BD0;
}

loc_80015B1C:
{
    r5 = 3;
    r4 = 1;
    r3 = 120;
    r0 = 8;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_80015BD0;
}

loc_80015B40:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
}

loc_80015B48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015B58;
    }
}

loc_80015B4C:
{
    r0 = 5;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_80015BD0;
}

loc_80015B58:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80015B60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015B6C;
    }
}

loc_80015B64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80015B68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80015BD0;
    }
}

loc_80015B6C:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80015BD0;
}

loc_80015B7C:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80015B84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015B94;
    }
}

loc_80015B88:
{
    r0 = 5;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_80015BD0;
}

loc_80015B94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80015B98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80015BD0;
    }
}

loc_80015B9C:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
    goto loc_80015BD0;
}

loc_80015BAC:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_80015BB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80015BD0;
    }
}

loc_80015BB8:
{
    r0 = 4;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    goto loc_80015BD0;
}

loc_80015BC4:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
}

loc_80015BD0:
{
    r6 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r31 + 2);
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite32(r30, r6);
    MemoryInline::FlatWrite32((r30 + 4), r5);
    MemoryInline::FlatWrite32((r30 + 8), r4);
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_80015BF4:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0000FFB gpr_write=0xE0000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80015680 func_80015680 preserves=true fpr_mask=0x00000000
