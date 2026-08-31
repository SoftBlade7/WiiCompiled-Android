#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071497C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8071497C;

loc_8071497C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r31 = 0x809C0000u;
    r30 = 0x808A0000u;
    r31 = (r31 + 10272);
    r27 = r4;
    r6 = (r31 + 32);
    r28 = r5;
    r0 = MemoryInline::FlatRead32(r6);
    r30 = (r30 + 7968);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_807149B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807149C0;
    }
}

loc_807149B8:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_807149C0:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_807149C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807149D4;
    }
}

loc_807149CC:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_807149D4:
{
    r0 = MemoryInline::FlatRead32((r6 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_807149DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807149E8;
    }
}

loc_807149E0:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_807149E8:
{
    r0 = MemoryInline::FlatRead32((r6 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_807149F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807149FC;
    }
}

loc_807149F4:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_807149FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(58));
}

loc_80714A00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714EF8;
    }
}

loc_80714A04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80714A88;
    }
}

loc_80714A08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(23));
}

loc_80714A0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715158;
    }
}

loc_80714A10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80714A50;
    }
}

loc_80714A14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(8));
}

loc_80714A18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714CCC;
    }
}

loc_80714A1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80714A38;
    }
}

loc_80714A20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(6));
}

loc_80714A24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714BC4;
    }
}

loc_80714A28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807150B4;
    }
}

loc_80714A2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80714A30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714B00;
    }
}

loc_80714A34:
{
    goto loc_80715370;
}

loc_80714A38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(15));
}

loc_80714A3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715068;
    }
}

loc_80714A40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715370;
    }
}

loc_80714A44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(10));
}

loc_80714A48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715370;
    }
}

loc_80714A4C:
{
    goto loc_8071501C;
}

loc_80714A50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(30));
}

loc_80714A54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807152FC;
    }
}

loc_80714A58:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80714A74;
    }
}

loc_80714A5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(26));
}

loc_80714A60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715230;
    }
}

loc_80714A64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715370;
    }
}

loc_80714A68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(25));
}

loc_80714A6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715370;
    }
}

loc_80714A70:
{
    goto loc_807151E4;
}

loc_80714A74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(54));
}

loc_80714A78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715370;
    }
}

loc_80714A7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(46));
}

loc_80714A80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715100;
    }
}

loc_80714A84:
{
    goto loc_80715370;
}

loc_80714A88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(223));
}

loc_80714A8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714B64;
    }
}

loc_80714A90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80714AC8;
    }
}

loc_80714A94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(211));
}

loc_80714A98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714B64;
    }
}

loc_80714A9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80714AB8;
    }
}

loc_80714AA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(72));
}

loc_80714AA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714EAC;
    }
}

loc_80714AA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715370;
    }
}

loc_80714AAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(60));
}

loc_80714AB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715370;
    }
}

loc_80714AB4:
{
    goto loc_80714F84;
}

loc_80714AB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(213));
}

loc_80714ABC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714B08;
    }
}

loc_80714AC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715370;
    }
}

loc_80714AC4:
{
    goto loc_80714BC4;
}

loc_80714AC8:
{
}

loc_80714ACC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(229))) {
        goto loc_80714AE8;
    }
}

loc_80714AD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(226));
}

loc_80714AD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80714AD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80714C6C;
    }
}

loc_80714ADC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(225));
}

loc_80714AE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80714B64;
    }
}

loc_80714AE4:
{
    goto loc_80715370;
}

loc_80714AE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(243));
}

loc_80714AEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714C20;
    }
}

loc_80714AF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715370;
    }
}

loc_80714AF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(241));
}

loc_80714AF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715354;
    }
}

loc_80714AFC:
{
    goto loc_80715370;
}

loc_80714B00:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_80714B08:
{
    r0 = MemoryInline::FlatRead32((r31 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714B10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714B40;
    }
}

loc_80714B14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714B24;
    }
}

loc_80714B18:
{
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80714B28;
}

loc_80714B24:
{
    r0 = -1;
}

loc_80714B28:
{
}

loc_80714B2C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_80714B38;
    }
}

loc_80714B30:
{
    r0 = 1;
    goto loc_80714B44;
}

loc_80714B38:
{
    r0 = 0;
    goto loc_80714B44;
}

loc_80714B40:
{
    r0 = 0;
}

loc_80714B44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714B48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80714B4C:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80714B54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80714B58:
{
    r4 = 0;
    ctx->lr = 0x80714B60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80715370;
}

loc_80714B64:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80714B6C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80714B78;
    }
}

loc_80714B70:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_80714B78:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714B80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714BB0;
    }
}

loc_80714B84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714B94;
    }
}

loc_80714B88:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80714B98;
}

loc_80714B94:
{
    r0 = -1;
}

loc_80714B98:
{
}

loc_80714B9C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(30))) {
        goto loc_80714BA8;
    }
}

loc_80714BA0:
{
    r0 = 1;
    goto loc_80714BB4;
}

loc_80714BA8:
{
    r0 = 0;
    goto loc_80714BB4;
}

loc_80714BB0:
{
    r0 = 0;
}

loc_80714BB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714BB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80714BBC:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_80714BC4:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714BCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714BFC;
    }
}

loc_80714BD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714BE0;
    }
}

loc_80714BD4:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80714BE4;
}

loc_80714BE0:
{
    r0 = -1;
}

loc_80714BE4:
{
}

loc_80714BE8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(31))) {
        goto loc_80714BF4;
    }
}

loc_80714BEC:
{
    r0 = 1;
    goto loc_80714C00;
}

loc_80714BF4:
{
    r0 = 0;
    goto loc_80714C00;
}

loc_80714BFC:
{
    r0 = 0;
}

loc_80714C00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714C04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80714C08:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80714C14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715370;
    }
}

loc_80714C18:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_80714C20:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714C28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714C58;
    }
}

loc_80714C2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714C3C;
    }
}

loc_80714C30:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80714C40;
}

loc_80714C3C:
{
    r0 = -1;
}

loc_80714C40:
{
}

loc_80714C44:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80714C50;
    }
}

loc_80714C48:
{
    r0 = 1;
    goto loc_80714C5C;
}

loc_80714C50:
{
    r0 = 0;
    goto loc_80714C5C;
}

loc_80714C58:
{
    r0 = 0;
}

loc_80714C5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714C60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80714C64:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_80714C6C:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(68));
}

loc_80714C74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80714C80;
    }
}

loc_80714C78:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_80714C80:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80714C90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80714C9C;
    }
}

loc_80714C94:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_80714C9C:
{
    r4 = (r5 & 255);
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r4 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714CC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80714CC4:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_80714CCC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 12), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80714CD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714D04;
    }
}

loc_80714CD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714CE8;
    }
}

loc_80714CDC:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80714CEC;
}

loc_80714CE8:
{
    r0 = -1;
}

loc_80714CEC:
{
}

loc_80714CF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(208))) {
        goto loc_80714CFC;
    }
}

loc_80714CF4:
{
    r0 = 1;
    goto loc_80714D08;
}

loc_80714CFC:
{
    r0 = 0;
    goto loc_80714D08;
}

loc_80714D04:
{
    r0 = 0;
}

loc_80714D08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714D0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80714E10;
    }
}

loc_80714D10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80714D14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714D44;
    }
}

loc_80714D18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714D28;
    }
}

loc_80714D1C:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80714D2C;
}

loc_80714D28:
{
    r0 = -1;
}

loc_80714D2C:
{
}

loc_80714D30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(23))) {
        goto loc_80714D3C;
    }
}

loc_80714D34:
{
    r0 = 1;
    goto loc_80714D48;
}

loc_80714D3C:
{
    r0 = 0;
    goto loc_80714D48;
}

loc_80714D44:
{
    r0 = 0;
}

loc_80714D48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714D4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80714E10;
    }
}

loc_80714D50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80714D54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714D84;
    }
}

loc_80714D58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714D68;
    }
}

loc_80714D5C:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80714D6C;
}

loc_80714D68:
{
    r0 = -1;
}

loc_80714D6C:
{
}

loc_80714D70:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(24))) {
        goto loc_80714D7C;
    }
}

loc_80714D74:
{
    r0 = 1;
    goto loc_80714D88;
}

loc_80714D7C:
{
    r0 = 0;
    goto loc_80714D88;
}

loc_80714D84:
{
    r0 = 0;
}

loc_80714D88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714D8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80714E10;
    }
}

loc_80714D90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80714D94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714DC4;
    }
}

loc_80714D98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714DA8;
    }
}

loc_80714D9C:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80714DAC;
}

loc_80714DA8:
{
    r0 = -1;
}

loc_80714DAC:
{
}

loc_80714DB0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(26))) {
        goto loc_80714DBC;
    }
}

loc_80714DB4:
{
    r0 = 1;
    goto loc_80714DC8;
}

loc_80714DBC:
{
    r0 = 0;
    goto loc_80714DC8;
}

loc_80714DC4:
{
    r0 = 0;
}

loc_80714DC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714DCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80714E10;
    }
}

loc_80714DD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80714DD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714E04;
    }
}

loc_80714DD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714DE8;
    }
}

loc_80714DDC:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80714DEC;
}

loc_80714DE8:
{
    r0 = -1;
}

loc_80714DEC:
{
}

loc_80714DF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(213))) {
        goto loc_80714DFC;
    }
}

loc_80714DF4:
{
    r0 = 1;
    goto loc_80714E08;
}

loc_80714DFC:
{
    r0 = 0;
    goto loc_80714E08;
}

loc_80714E04:
{
    r0 = 0;
}

loc_80714E08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714E0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714E18;
    }
}

loc_80714E10:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_80714E18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80714E1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714E4C;
    }
}

loc_80714E20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714E30;
    }
}

loc_80714E24:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80714E34;
}

loc_80714E30:
{
    r0 = -1;
}

loc_80714E34:
{
}

loc_80714E38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_80714E44;
    }
}

loc_80714E3C:
{
    r0 = 1;
    goto loc_80714E50;
}

loc_80714E44:
{
    r0 = 0;
    goto loc_80714E50;
}

loc_80714E4C:
{
    r0 = 0;
}

loc_80714E50:
{
}

loc_80714E54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80714E98;
    }
}

loc_80714E58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80714E5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714E8C;
    }
}

loc_80714E60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714E70;
    }
}

loc_80714E64:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80714E74;
}

loc_80714E70:
{
    r0 = -1;
}

loc_80714E74:
{
}

loc_80714E78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(72))) {
        goto loc_80714E84;
    }
}

loc_80714E7C:
{
    r0 = 1;
    goto loc_80714E90;
}

loc_80714E84:
{
    r0 = 0;
    goto loc_80714E90;
}

loc_80714E8C:
{
    r0 = 0;
}

loc_80714E90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714E94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80714E98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80714E9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80714EA0:
{
    r4 = 0;
    ctx->lr = 0x80714EA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80715370;
}

loc_80714EAC:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714EB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714EE4;
    }
}

loc_80714EB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714EC8;
    }
}

loc_80714EBC:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80714ECC;
}

loc_80714EC8:
{
    r0 = -1;
}

loc_80714ECC:
{
}

loc_80714ED0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_80714EDC;
    }
}

loc_80714ED4:
{
    r0 = 1;
    goto loc_80714EE8;
}

loc_80714EDC:
{
    r0 = 0;
    goto loc_80714EE8;
}

loc_80714EE4:
{
    r0 = 0;
}

loc_80714EE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714EEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80714EF0:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_80714EF8:
{
    r4 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80714F00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714F30;
    }
}

loc_80714F04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714F14;
    }
}

loc_80714F08:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80714F18;
}

loc_80714F14:
{
    r0 = -1;
}

loc_80714F18:
{
}

loc_80714F1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(59))) {
        goto loc_80714F28;
    }
}

loc_80714F20:
{
    r0 = 1;
    goto loc_80714F34;
}

loc_80714F28:
{
    r0 = 0;
    goto loc_80714F34;
}

loc_80714F30:
{
    r0 = 0;
}

loc_80714F34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714F38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80714F7C;
    }
}

loc_80714F3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80714F40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714F70;
    }
}

loc_80714F44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714F54;
    }
}

loc_80714F48:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80714F58;
}

loc_80714F54:
{
    r0 = -1;
}

loc_80714F58:
{
}

loc_80714F5C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(58))) {
        goto loc_80714F68;
    }
}

loc_80714F60:
{
    r0 = 1;
    goto loc_80714F74;
}

loc_80714F68:
{
    r0 = 0;
    goto loc_80714F74;
}

loc_80714F70:
{
    r0 = 0;
}

loc_80714F74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80714F78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80714F7C:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_80714F84:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80714F8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714FBC;
    }
}

loc_80714F90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714FA0;
    }
}

loc_80714F94:
{
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80714FA4;
}

loc_80714FA0:
{
    r0 = -1;
}

loc_80714FA4:
{
}

loc_80714FA8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(59))) {
        goto loc_80714FB4;
    }
}

loc_80714FAC:
{
    r0 = 1;
    goto loc_80714FC0;
}

loc_80714FB4:
{
    r0 = 0;
    goto loc_80714FC0;
}

loc_80714FBC:
{
    r0 = 0;
}

loc_80714FC0:
{
}

loc_80714FC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80715008;
    }
}

loc_80714FC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80714FCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714FFC;
    }
}

loc_80714FD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714FE0;
    }
}

loc_80714FD4:
{
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80714FE4;
}

loc_80714FE0:
{
    r0 = -1;
}

loc_80714FE4:
{
}

loc_80714FE8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(58))) {
        goto loc_80714FF4;
    }
}

loc_80714FEC:
{
    r0 = 1;
    goto loc_80715000;
}

loc_80714FF4:
{
    r0 = 0;
    goto loc_80715000;
}

loc_80714FFC:
{
    r0 = 0;
}

loc_80715000:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80715004:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80715008:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071500C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80715010:
{
    r4 = 0;
    ctx->lr = 0x80715018u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80715370;
}

loc_8071501C:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80715024:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715054;
    }
}

loc_80715028:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715038;
    }
}

loc_8071502C:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8071503C;
}

loc_80715038:
{
    r0 = -1;
}

loc_8071503C:
{
}

loc_80715040:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_8071504C;
    }
}

loc_80715044:
{
    r0 = 1;
    goto loc_80715058;
}

loc_8071504C:
{
    r0 = 0;
    goto loc_80715058;
}

loc_80715054:
{
    r0 = 0;
}

loc_80715058:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8071505C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80715060:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_80715068:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80715070:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807150A0;
    }
}

loc_80715074:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715084;
    }
}

loc_80715078:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80715088;
}

loc_80715084:
{
    r0 = -1;
}

loc_80715088:
{
}

loc_8071508C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80715098;
    }
}

loc_80715090:
{
    r0 = 1;
    goto loc_807150A4;
}

loc_80715098:
{
    r0 = 0;
    goto loc_807150A4;
}

loc_807150A0:
{
    r0 = 0;
}

loc_807150A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807150A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_807150AC:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_807150B4:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807150BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807150EC;
    }
}

loc_807150C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807150D0;
    }
}

loc_807150C4:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807150D4;
}

loc_807150D0:
{
    r0 = -1;
}

loc_807150D4:
{
}

loc_807150D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(19))) {
        goto loc_807150E4;
    }
}

loc_807150DC:
{
    r0 = 1;
    goto loc_807150F0;
}

loc_807150E4:
{
    r0 = 0;
    goto loc_807150F0;
}

loc_807150EC:
{
    r0 = 0;
}

loc_807150F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807150F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_807150F8:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_80715100:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80715108:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715138;
    }
}

loc_8071510C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071511C;
    }
}

loc_80715110:
{
    r5 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_80715120;
}

loc_8071511C:
{
    r0 = -1;
}

loc_80715120:
{
}

loc_80715124:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80715130;
    }
}

loc_80715128:
{
    r0 = 1;
    goto loc_8071513C;
}

loc_80715130:
{
    r0 = 0;
    goto loc_8071513C;
}

loc_80715138:
{
    r0 = 0;
}

loc_8071513C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80715140:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80715144:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80715148:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_8071514C:
{
    r4 = 10;
    ctx->lr = 0x80715154u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80715370;
}

loc_80715158:
{
    r4 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80715160:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715190;
    }
}

loc_80715164:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715174;
    }
}

loc_80715168:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80715178;
}

loc_80715174:
{
    r0 = -1;
}

loc_80715178:
{
}

loc_8071517C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(23))) {
        goto loc_80715188;
    }
}

loc_80715180:
{
    r0 = 1;
    goto loc_80715194;
}

loc_80715188:
{
    r0 = 0;
    goto loc_80715194;
}

loc_80715190:
{
    r0 = 0;
}

loc_80715194:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80715198:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807151DC;
    }
}

loc_8071519C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807151A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807151D0;
    }
}

loc_807151A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807151B4;
    }
}

loc_807151A8:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807151B8;
}

loc_807151B4:
{
    r0 = -1;
}

loc_807151B8:
{
}

loc_807151BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(26))) {
        goto loc_807151C8;
    }
}

loc_807151C0:
{
    r0 = 1;
    goto loc_807151D4;
}

loc_807151C8:
{
    r0 = 0;
    goto loc_807151D4;
}

loc_807151D0:
{
    r0 = 0;
}

loc_807151D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807151D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_807151DC:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_807151E4:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807151EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071521C;
    }
}

loc_807151F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715200;
    }
}

loc_807151F4:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80715204;
}

loc_80715200:
{
    r0 = -1;
}

loc_80715204:
{
}

loc_80715208:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(24))) {
        goto loc_80715214;
    }
}

loc_8071520C:
{
    r0 = 1;
    goto loc_80715220;
}

loc_80715214:
{
    r0 = 0;
    goto loc_80715220;
}

loc_8071521C:
{
    r0 = 0;
}

loc_80715220:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80715224:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80715228:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_80715230:
{
    r4 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80715238:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715268;
    }
}

loc_8071523C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071524C;
    }
}

loc_80715240:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80715250;
}

loc_8071524C:
{
    r0 = -1;
}

loc_80715250:
{
}

loc_80715254:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(26))) {
        goto loc_80715260;
    }
}

loc_80715258:
{
    r0 = 1;
    goto loc_8071526C;
}

loc_80715260:
{
    r0 = 0;
    goto loc_8071526C;
}

loc_80715268:
{
    r0 = 0;
}

loc_8071526C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80715270:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807152F4;
    }
}

loc_80715274:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80715278:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807152A8;
    }
}

loc_8071527C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071528C;
    }
}

loc_80715280:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80715290;
}

loc_8071528C:
{
    r0 = -1;
}

loc_80715290:
{
}

loc_80715294:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(23))) {
        goto loc_807152A0;
    }
}

loc_80715298:
{
    r0 = 1;
    goto loc_807152AC;
}

loc_807152A0:
{
    r0 = 0;
    goto loc_807152AC;
}

loc_807152A8:
{
    r0 = 0;
}

loc_807152AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807152B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807152F4;
    }
}

loc_807152B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807152B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807152E8;
    }
}

loc_807152BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807152CC;
    }
}

loc_807152C0:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807152D0;
}

loc_807152CC:
{
    r0 = -1;
}

loc_807152D0:
{
}

loc_807152D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(24))) {
        goto loc_807152E0;
    }
}

loc_807152D8:
{
    r0 = 1;
    goto loc_807152EC;
}

loc_807152E0:
{
    r0 = 0;
    goto loc_807152EC;
}

loc_807152E8:
{
    r0 = 0;
}

loc_807152EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807152F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_807152F4:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_807152FC:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80715304:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715334;
    }
}

loc_80715308:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715318;
    }
}

loc_8071530C:
{
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8071531C;
}

loc_80715318:
{
    r0 = -1;
}

loc_8071531C:
{
}

loc_80715320:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_8071532C;
    }
}

loc_80715324:
{
    r0 = 1;
    goto loc_80715338;
}

loc_8071532C:
{
    r0 = 0;
    goto loc_80715338;
}

loc_80715334:
{
    r0 = 0;
}

loc_80715338:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8071533C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80715340:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80715344:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80715348:
{
    r4 = 0;
    ctx->lr = 0x80715350u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80715370;
}

loc_80715354:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10232));
    r0 = MemoryInline::FlatRead32((r3 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_80715364:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715370;
    }
}

loc_80715368:
{
    r3 = 0;
    goto loc_807155CC;
}

loc_80715370:
{
    r3 = 0x809C0000u;
    r5 = r27;
    r3 = MemoryInline::FlatRead32((r3 + 10392));
    r4 = (r31 + 12);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 176));
    ctr = r12;
    ctx->lr = 0x80715390u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80715394:
{
    r29 = r3;
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(32))) {
        goto loc_807153A8;
    }
}

loc_8071539C:
{
}

loc_807153A0:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(8))) {
        goto loc_807153CC;
    }
}

loc_807153A4:
{
    goto loc_80715424;
}

loc_807153A8:
{
}

loc_807153AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80715424;
    }
}

loc_807153B0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
}

loc_807153B4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80715424;
    }
}

loc_807153B8:
{
    r3 = (r31 + 12);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r5 = 0;
    ctx->lr = 0x807153C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80717C48u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80715424;
}

loc_807153CC:
{
}

loc_807153D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80715424;
    }
}

loc_807153D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_807153D8:
{
    r4 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807153FC;
    }
}

loc_807153E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(1));
}

loc_807153E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715404;
    }
}

loc_807153E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(2));
}

loc_807153EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071540C;
    }
}

loc_807153F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(3));
}

loc_807153F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715414;
    }
}

loc_807153F8:
{
    goto loc_80715418;
}

loc_807153FC:
{
    r4 = 0;
    goto loc_80715418;
}

loc_80715404:
{
    r4 = 1;
    goto loc_80715418;
}

loc_8071540C:
{
    r4 = 2;
    goto loc_80715418;
}

loc_80715414:
{
    r4 = 3;
}

loc_80715418:
{
    r3 = (r31 + 12);
    r5 = 0;
    ctx->lr = 0x80715424u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80717C48u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80715424:
{
    r0 = (r27 + -46);
}

loc_8071542C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(7))) {
        goto loc_80715444;
    }
}

loc_80715430:
{
    r0 = (r27 + -61);
}

loc_80715438:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80715444;
    }
}

loc_8071543C:
{
}

loc_80715440:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(32))) {
        goto loc_807154DC;
    }
}

loc_80715444:
{
}

loc_80715448:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(-1))) {
        goto loc_807154DC;
    }
}

loc_8071544C:
{
    r3 = 0x809C0000u;
    r4 = r28;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r26 = 1;
    r3 = (r3 + 52);
    // inline leaf 0x8061B378 (8 guest instruction(s))
}

loc_inl2_0x8061B378:
{
}

loc_inl2_0x8061B37C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl2_0x8061B388;
    }
}

loc_inl2_0x8061B380:
{
    r3 = 0;
    goto loc_inl2_cont_8061B378;
}

loc_inl2_0x8061B388:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_inl2_cont_8061B378:
{
    // end of inlined leaf 0x8061B378
}

loc_80715468:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(785))) {
        goto loc_80715494;
    }
}

loc_8071546C:
{
}

loc_80715470:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(529))) {
        goto loc_80715488;
    }
}

loc_80715474:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(276));
}

loc_80715478:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807154D0;
    }
}

loc_8071547C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(273));
}

loc_80715480:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807154B4;
    }
}

loc_80715484:
{
    goto loc_807154D0;
}

loc_80715488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(532));
}

loc_8071548C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807154D0;
    }
}

loc_80715490:
{
    goto loc_807154BC;
}

loc_80715494:
{
}

loc_80715498:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(1041))) {
        goto loc_807154A8;
    }
}

loc_8071549C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(788));
}

loc_807154A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807154D0;
    }
}

loc_807154A4:
{
    goto loc_807154C4;
}

loc_807154A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1044));
}

loc_807154AC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807154D0;
    }
}

loc_807154B0:
{
    goto loc_807154CC;
}

loc_807154B4:
{
    r26 = (r26 | 2);
    goto loc_807154D0;
}

loc_807154BC:
{
    r26 = (r26 | 4);
    goto loc_807154D0;
}

loc_807154C4:
{
    r26 = (r26 | 8);
    goto loc_807154D0;
}

loc_807154CC:
{
    r26 = (r26 | 16);
}

loc_807154D0:
{
    r4 = r26;
    r3 = (r31 + 12);
    ctx->lr = 0x807154DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80713C80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_807154DC:
{
    r0 = (r27 + -37);
}

loc_807154E4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_80715570;
    }
}

loc_807154E8:
{
    r0 = (r27 + -227);
}

loc_807154F0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_80715504;
    }
}

loc_807154F4:
{
}

loc_807154F8:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(218))) {
        goto loc_80715504;
    }
}

loc_807154FC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(116));
}

loc_80715500:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807155C8;
    }
}

loc_80715504:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10232));
    r3 = MemoryInline::FlatRead8((r3 + 76));
    r0 = (r3 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80715518:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807155C8;
    }
}

loc_8071551C:
{
}

loc_80715520:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80715540;
    }
}

loc_80715524:
{
}

loc_80715528:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(2))) {
        goto loc_80715540;
    }
}

loc_8071552C:
{
}

loc_80715530:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(1))) {
        goto loc_80715558;
    }
}

loc_80715534:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(3));
}

loc_80715538:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715558;
    }
}

loc_8071553C:
{
    goto loc_807155C8;
}

loc_80715540:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80715548:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807155C8;
    }
}

loc_8071554C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    // inline leaf 0x8008F620 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 168), f1.d);
    // end of inlined leaf 0x8008F620
    goto loc_807155C8;
}

loc_80715558:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80715560:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807155C8;
    }
}

loc_80715564:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    // inline leaf 0x8008F620 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 168), f1.d);
    // end of inlined leaf 0x8008F620
    goto loc_807155C8;
}

loc_80715570:
{
    r3 = (r28 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f3.d = MemoryInline::FlatReadFloat64((r30 + 24));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071559C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807155A8;
    }
}

loc_807155A0:
{
    f1.d = f0.d;
    goto loc_807155B8;
}

loc_807155A8:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807155B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807155B8;
    }
}

loc_807155B4:
{
    f1.d = f0.d;
}

loc_807155B8:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807155C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807155C8;
    }
}

loc_807155C4:
{
    // inline leaf 0x8008F620 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 168), f1.d);
    // end of inlined leaf 0x8008F620
}

loc_807155C8:
{
    r3 = r29;
}

loc_807155CC:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8071497C func_8071497C preserves=true fpr_mask=0x00000000
