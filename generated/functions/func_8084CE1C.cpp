#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8084CE1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8084CE1C;

loc_8084CE1C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0;
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    r4 = 0x809C0000u;
    r3 = (r3 & 255);
}

loc_8084CE44:
{
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r6 = 0;
    r4 = (r4 + 3096);
    ctr = r3;
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8084CE8C;
    }
}

loc_8084CE58:
{
    r0 = (r6 & 255);
    r0 = (r0 * 240);
    r5 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 204));
}

loc_8084CE6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8084CE78;
    }
}

loc_8084CE70:
{
    r30 = (r30 + 1);
    goto loc_8084CE84;
}

loc_8084CE78:
{
}

loc_8084CE7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8084CE84;
    }
}

loc_8084CE80:
{
    r31 = (r31 + 1);
}

loc_8084CE84:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8084CE58;
    }
}

loc_8084CE8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r30));
}

loc_8084CE90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084CEF0;
    }
}

loc_8084CE94:
{
    r0 = (12 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r6 = 0x809C0000u;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
}

loc_8084CEA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8084CFDC;
    }
}

loc_8084CEA8:
{
    r4 = (r3 & 255);
    r0 = MemoryInline::FlatRead32((r6 + -10456));
    r5 = (r4 * 240);
    r5 = (r0 + r5);
    r0 = MemoryInline::FlatRead32((r5 + 3112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8084CEC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084CEE4;
    }
}

loc_8084CEC4:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r0 = (r3 & 1);
    r0 = (r0 ^ r4);
    r4 = (r0 - r4);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    MemoryInline::FlatWrite32((r5 + 3300), r0);
}

loc_8084CEE4:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8084CEA8;
    }
}

loc_8084CEEC:
{
    goto loc_8084CFDC;
}

loc_8084CEF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8084CF68;
    }
}

loc_8084CEF4:
{
    r0 = (12 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r5 = 0;
    r7 = 0x809C0000u;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
}

loc_8084CF08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8084CFDC;
    }
}

loc_8084CF0C:
{
    r4 = (r3 & 255);
    r0 = MemoryInline::FlatRead32((r7 + -10456));
    r6 = (r4 * 240);
    r6 = (r0 + r6);
    r0 = MemoryInline::FlatRead32((r6 + 3112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8084CF24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084CF5C;
    }
}

loc_8084CF28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r30));
}

loc_8084CF2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8084CF3C;
    }
}

loc_8084CF30:
{
    MemoryInline::FlatWrite32((r6 + 3300), r5);
    r31 = (r31 + 1);
    goto loc_8084CF5C;
}

loc_8084CF3C:
{
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_5 & 1);
    r0 = (r3 & 1);
    r0 = (r0 ^ r4);
    r4 = (r0 - r4);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    MemoryInline::FlatWrite32((r6 + 3300), r0);
}

loc_8084CF5C:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8084CF0C;
    }
}

loc_8084CF64:
{
    goto loc_8084CFDC;
}

loc_8084CF68:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8084CFDC;
    }
}

loc_8084CF6C:
{
    r0 = (12 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r5 = 1;
    r7 = 0x809C0000u;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
}

loc_8084CF80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8084CFDC;
    }
}

loc_8084CF84:
{
    r4 = (r3 & 255);
    r0 = MemoryInline::FlatRead32((r7 + -10456));
    r6 = (r4 * 240);
    r6 = (r0 + r6);
    r0 = MemoryInline::FlatRead32((r6 + 3112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8084CF9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084CFD4;
    }
}

loc_8084CFA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r30));
}

loc_8084CFA4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8084CFB4;
    }
}

loc_8084CFA8:
{
    MemoryInline::FlatWrite32((r6 + 3300), r5);
    r30 = (r30 + 1);
    goto loc_8084CFD4;
}

loc_8084CFB4:
{
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_8 & 1);
    r0 = (r3 & 1);
    r0 = (r0 ^ r4);
    r4 = (r0 - r4);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
    MemoryInline::FlatWrite32((r6 + 3300), r0);
}

loc_8084CFD4:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8084CF84;
    }
}

loc_8084CFDC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8084CE1C func_8084CE1C preserves=true fpr_mask=0x00000000
