#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80653960(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r5_addic_src_3 = 0;
    uint32_t r5_addic_src_4 = 0;
    uint32_t r5_addic_src_5 = 0;
    uint32_t r5_addic_src_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80653960;

loc_80653960:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x809C0000u;
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    // inline leaf 0x80656F00 (16 guest instruction(s))
}

loc_inl0_0x80656F00:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r5 = 1;
    r6 = 0;
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 89));
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80656F38;
    }
}

loc_inl0_0x80656F28:
{
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_inl0_0x80656F30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x80656F38;
    }
}

loc_inl0_0x80656F34:
{
    r6 = 1;
}

loc_inl0_0x80656F38:
{
    r3 = r6;
}

loc_inl0_cont_80656F00:
{
    // end of inlined leaf 0x80656F00
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80653990:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80653AA8;
    }
}

loc_80653994:
{
    r7 = MemoryInline::FlatRead32((r31 + 8408));
    r0 = 3;
    r6 = -1;
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r7 + 10524));
    r3 = (r3 * 88);
    r3 = (r7 + r3);
    r4 = MemoryInline::FlatRead8((r3 + 89));
    ctr = r0;
}

loc_806539B8:
{
}

loc_806539BC:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_806539D4;
    }
}

loc_806539C0:
{
}

loc_806539C4:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(12))) {
        goto loc_806539D4;
    }
}

loc_806539C8:
{
    r3 = (r7 + r5);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_806539D8;
}

loc_806539D4:
{
    r0 = 255;
}

loc_806539D8:
{
}

loc_806539DC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_806539EC;
    }
}

loc_806539E0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r30));
}

loc_806539E4:
{
    r6 = (r6 + 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80653A90;
    }
}

loc_806539EC:
{
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_806539F0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_80653A08;
    }
}

loc_806539F4:
{
}

loc_806539F8:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(12))) {
        goto loc_80653A08;
    }
}

loc_806539FC:
{
    r3 = (r7 + r5);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80653A0C;
}

loc_80653A08:
{
    r0 = 255;
}

loc_80653A0C:
{
}

loc_80653A10:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80653A20;
    }
}

loc_80653A14:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r30));
}

loc_80653A18:
{
    r6 = (r6 + 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80653A90;
    }
}

loc_80653A20:
{
    r5_addic_src_3 = r5;
    r5 = (r5_addic_src_3 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_3)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80653A24:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_80653A3C;
    }
}

loc_80653A28:
{
}

loc_80653A2C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(12))) {
        goto loc_80653A3C;
    }
}

loc_80653A30:
{
    r3 = (r7 + r5);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80653A40;
}

loc_80653A3C:
{
    r0 = 255;
}

loc_80653A40:
{
}

loc_80653A44:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80653A54;
    }
}

loc_80653A48:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r30));
}

loc_80653A4C:
{
    r6 = (r6 + 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80653A90;
    }
}

loc_80653A54:
{
    r5_addic_src_4 = r5;
    r5 = (r5_addic_src_4 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_4)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80653A58:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_80653A70;
    }
}

loc_80653A5C:
{
}

loc_80653A60:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(12))) {
        goto loc_80653A70;
    }
}

loc_80653A64:
{
    r3 = (r7 + r5);
    r0 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80653A74;
}

loc_80653A70:
{
    r0 = 255;
}

loc_80653A74:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80653A78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80653A88;
    }
}

loc_80653A7C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r30));
}

loc_80653A80:
{
    r6 = (r6 + 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80653A90;
    }
}

loc_80653A88:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806539B8;
    }
}

loc_80653A90:
{
    r0 = (r6 * r29);
    r4 = r28;
    r5 = r29;
    r3 = (r27 + r0);
    r3 = (r3 + 20);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80653AA8:
{
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80000FB gpr_write=0xF80000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80653960 func_80653960 preserves=true fpr_mask=0x00000000
