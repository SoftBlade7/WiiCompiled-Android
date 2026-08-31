#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FBD4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801FBD4C;

loc_801FBD4C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r29 = r4;
    r8 = MemoryInline::FlatRead32((r3 + 48));
    r27 = r3;
    r0 = MemoryInline::FlatRead32(r7);
    r28 = r5;
    r4 = MemoryInline::FlatRead32((r8 + 28));
    r30 = r6;
}

loc_801FBD84:
{
    r31 = MemoryInline::FlatRead32((r3 + 44));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801FBDA4;
    }
}

loc_801FBD8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801FBD90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FBDA4;
    }
}

loc_801FBD94:
{
    r0 = -1;
    r3 = 0;
    MemoryInline::FlatWrite32(r6, r0);
    goto loc_801FBEB4;
}

loc_801FBDA4:
{
}

loc_801FBDA8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801FBDCC;
    }
}

loc_801FBDAC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_801FBDB0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801FBDC4;
    }
}

loc_801FBDB4:
{
    r0 = -1;
    r3 = 0;
    MemoryInline::FlatWrite32(r6, r0);
    goto loc_801FBEB4;
}

loc_801FBDC4:
{
    r0 = MemoryInline::FlatRead32((r8 + 16));
    MemoryInline::FlatWrite32(r7, r0);
}

loc_801FBDCC:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FBDD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FBE20;
    }
}

loc_801FBDD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801FBDDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FBE20;
    }
}

loc_801FBDE0:
{
    r3 = r27;
    r4 = r29;
    r5 = r30;
    r6 = (r1 + 16);
    ctx->lr = 0x801FBDF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FAB78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FBDF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FBE00;
    }
}

loc_801FBDFC:
{
    goto loc_801FBEB4;
}

loc_801FBE00:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FBE08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FBE20;
    }
}

loc_801FBE0C:
{
    MemoryInline::FlatWrite32(r31, r29);
    r3 = 0;
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_801FBEB4;
}

loc_801FBE20:
{
    r0 = (0 - r28);
    r3 = -1;
    r0 = (r0 | r28);
    MemoryInline::FlatWrite32(r30, r3);
    r3 = r27;
    r4 = r29;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r7 = (r1 + 8);
    r8 = (r1 + 12);
    r6 = 0;
    ctx->lr = 0x801FBE4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FB7A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801FBE50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801FBE58;
    }
}

loc_801FBE54:
{
    goto loc_801FBE80;
}

loc_801FBE58:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
}

loc_801FBE60:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(2))) {
        goto loc_801FBE7C;
    }
}

loc_801FBE64:
{
    r3 = MemoryInline::FlatRead32((r27 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 52));
    r0 = (r3 + 2);
}

loc_801FBE74:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_801FBE7C;
    }
}

loc_801FBE78:
{
    MemoryInline::FlatWrite32(r30, r4);
}

loc_801FBE7C:
{
    r3 = 0;
}

loc_801FBE80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FBE84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FBE8C;
    }
}

loc_801FBE88:
{
    goto loc_801FBEB4;
}

loc_801FBE8C:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FBE98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FBEA4;
    }
}

loc_801FBE9C:
{
    r3 = 0;
    goto loc_801FBEB4;
}

loc_801FBEA4:
{
    MemoryInline::FlatWrite32(r31, r29);
    r3 = 0;
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32((r31 + 4), r0);
}

loc_801FBEB4:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
// RECOMP_REGISTRATION base 0x801FBD4C func_801FBD4C preserves=true fpr_mask=0x00000000
