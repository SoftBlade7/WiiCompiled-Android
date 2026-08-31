#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DDBA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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

    goto loc_801DDBA4;

loc_801DDBA4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r8 = MemoryInline::FlatRead32((r3 + 4));
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r0 = (r8 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DDBCC:
{
    r30 = r6;
    r31 = r7;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DDBE0;
    }
}

loc_801DDBD8:
{
    r0 = (r8 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DDBDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DDBE8;
    }
}

loc_801DDBE0:
{
    r3 = -7;
    goto loc_801DDCC4;
}

loc_801DDBE8:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E163Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DDBF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DDC00;
    }
}

loc_801DDBF8:
{
    r3 = -3;
    goto loc_801DDCC4;
}

loc_801DDC00:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E16F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DDC0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DDC18;
    }
}

loc_801DDC10:
{
    r3 = -3;
    goto loc_801DDCC4;
}

loc_801DDC18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801DDC1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DDC30;
    }
}

loc_801DDC20:
{
    r3 = (r27 + 72);
    // inline leaf 0x801DC9AC (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x801DC9AC
    r3 = 0;
    goto loc_801DDCC4;
}

loc_801DDC30:
{
}

loc_801DDC34:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(1))) {
        goto loc_801DDC4C;
    }
}

loc_801DDC38:
{
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DDC40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DDC4C;
    }
}

loc_801DDC44:
{
    r3 = -4;
    goto loc_801DDCC4;
}

loc_801DDC4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801DDC50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DDCA8;
    }
}

loc_801DDC54:
{
    r4 = r28;
    r5 = (r28 + r29);
    r3 = 0;
    goto loc_801DDCA0;
}

loc_801DDC64:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_801DDC6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_801DDC88;
    }
}

loc_801DDC70:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_801DDC78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_801DDC88;
    }
}

loc_801DDC7C:
{
    r3 = 0;
    r4 = (r4 + 1);
    goto loc_801DDC9C;
}

loc_801DDC88:
{
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(998));
}

loc_801DDC90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801DDC9C;
    }
}

loc_801DDC94:
{
    r3 = -24;
    goto loc_801DDCC4;
}

loc_801DDC9C:
{
    r4 = (r4 + 1);
}

loc_801DDCA0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_801DDCA4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801DDC64;
    }
}

loc_801DDCA8:
{
    r4 = r28;
    r5 = r29;
    r3 = (r27 + 72);
    // inline leaf 0x801DC9BC (3 guest instruction(s))
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    // end of inlined leaf 0x801DC9BC
    MemoryInline::FlatWrite32((r27 + 96), r30);
    r3 = 0;
    MemoryInline::FlatWrite32((r27 + 100), r31);
}

loc_801DDCC4:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0xF80001FB gpr_write=0xF800093B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801DDBA4 func_801DDBA4 preserves=true fpr_mask=0x00000000
