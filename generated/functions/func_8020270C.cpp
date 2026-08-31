#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020270C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8020270C;

loc_8020270C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80202730:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802027F0;
    }
}

loc_80202734:
{
    r5 = MemoryInline::FlatRead32(r3);
    r0 = 0;
    r4 = (r5 + 1);
    MemoryInline::FlatWrite32(r3, r4);
    r4 = MemoryInline::FlatRead8(r5);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80202768;
    }
}

loc_80202758:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80202764:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80202770;
    }
}

loc_80202768:
{
    r3 = 0;
    goto loc_802029B0;
}

loc_80202770:
{
    r5 = 0x80360000u;
    r3 = r6;
    r5 = (r5 + -20912);
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r5 + 48));
    ctr = r12;
    ctx->lr = 0x8020278Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80202790:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802027C0;
    }
}

loc_80202794:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = MemoryInline::FlatRead8(r3);
    r3 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32(r30, r3);
    r3 = MemoryInline::FlatRead8((r1 + 16));
    r0 = MemoryInline::FlatRead8((r1 + 17));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    goto loc_802027C8;
}

loc_802027C0:
{
    r0 = MemoryInline::FlatRead8((r1 + 16));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
}

loc_802027C8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
}

loc_802027CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802028B8;
    }
}

loc_802027D0:
{
    r5 = 0x80360000u;
    r3 = (r1 + 16);
    r5 = (r5 + -20912);
    r4 = (r1 + 12);
    r12 = MemoryInline::FlatRead32((r5 + 36));
    ctr = r12;
    ctx->lr = 0x802027ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_802028B8;
}

loc_802027F0:
{
    r5 = MemoryInline::FlatRead32(r3);
    r0 = 0;
    r5 = MemoryInline::FlatRead16(r5);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead16(r5);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r5);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r5) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead32(r3);
    r5 = (r5 + 2);
    MemoryInline::FlatWrite32(r3, r5);
    r6 = MemoryInline::FlatRead8((r1 + 16));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80202838;
    }
}

loc_8020282C:
{
    r0 = MemoryInline::FlatRead8((r1 + 17));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80202848;
    }
}

loc_80202838:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80202844:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80202850;
    }
}

loc_80202848:
{
    r3 = 0;
    goto loc_802029B0;
}

loc_80202850:
{
    r0 = MemoryInline::FlatRead8((r1 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80202858:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r0 = (r0 + r6);
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802028B8;
    }
}

loc_80202868:
{
    r30 = 0x80360000u;
    r3 = (r1 + 12);
    r30 = (r30 + -20912);
    r4 = (r1 + 10);
    r12 = MemoryInline::FlatRead32((r30 + 40));
    ctr = r12;
    ctx->lr = 0x80202884u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r1 + 10));
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r30 + 48));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r0) >> 8);
    ctr = r12;
    ctx->lr = 0x8020289Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_802028A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802028AC;
    }
}

loc_802028A4:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
    goto loc_802028B4;
}

loc_802028AC:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
}

loc_802028B4:
{
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
}

loc_802028B8:
{
    r3 = MemoryInline::FlatRead16((r1 + 12));
    r0 = 0;
}

loc_802028C4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(97))) {
        goto loc_802028D4;
    }
}

loc_802028C8:
{
}

loc_802028CC:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(122))) {
        goto loc_802028D4;
    }
}

loc_802028D0:
{
    r0 = 1;
}

loc_802028D4:
{
}

loc_802028D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802028E0;
    }
}

loc_802028DC:
{
    r3 = (r3 + -32);
}

loc_802028E0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
}

loc_802028E4:
{
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r3));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80202928;
    }
}

loc_802028EC:
{
    r3 = (r3 & 65535);
}

loc_802028F4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(65345))) {
        goto loc_80202910;
    }
}

loc_802028F8:
{
}

loc_802028FC:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(65370))) {
        goto loc_80202910;
    }
}

loc_80202900:
{
    r0 = (r3 + -32);
    r3 = 1;
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    goto loc_80202914;
}

loc_80202910:
{
    r3 = 0;
}

loc_80202914:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_80202918:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802029AC;
    }
}

loc_8020291C:
{
    r0 = MemoryInline::FlatRead16((r1 + 8));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    goto loc_802029AC;
}

loc_80202928:
{
    r5 = 0x80360000u;
    r3 = (r1 + 16);
    r5 = (r5 + -20912);
    r4 = (r1 + 8);
    r12 = MemoryInline::FlatRead32((r5 + 36));
    ctr = r12;
    ctx->lr = 0x80202944u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r1 + 8));
}

loc_8020294C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(65345))) {
        goto loc_80202968;
    }
}

loc_80202950:
{
}

loc_80202954:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(65370))) {
        goto loc_80202968;
    }
}

loc_80202958:
{
    r0 = (r3 + -32);
    r3 = 1;
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    goto loc_8020296C;
}

loc_80202968:
{
    r3 = 0;
}

loc_8020296C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_80202970:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80202998;
    }
}

loc_80202974:
{
    r4 = 0x80360000u;
    r3 = (r1 + 8);
    r4 = (r4 + -20912);
    r12 = MemoryInline::FlatRead32((r4 + 40));
    r4 = r3;
    ctr = r12;
    ctx->lr = 0x80202990u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 1;
    goto loc_8020299C;
}

loc_80202998:
{
    r3 = 0;
}

loc_8020299C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_802029A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802029AC;
    }
}

loc_802029A4:
{
    r0 = MemoryInline::FlatRead16((r1 + 8));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
}

loc_802029AC:
{
    r3 = MemoryInline::FlatRead16((r1 + 12));
}

loc_802029B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8020270C func_8020270C preserves=true fpr_mask=0x00000000
