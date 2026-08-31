#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013CA78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8013CA78;

loc_8013CA78:
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
    r31 = 0x80330000u;
    r27 = r3;
    r31 = (r31 + 25208);
    r0 = MemoryInline::FlatRead8((r31 + 6216));
    r29 = MemoryInline::FlatRead32((r31 + 5852));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013CAA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013CAB0;
    }
}

loc_8013CAA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8013CAAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013CAB8;
    }
}

loc_8013CAB0:
{
    r3 = 0;
    goto loc_8013CB3C;
}

loc_8013CAB8:
{
    r30 = MemoryInline::FlatRead16((r31 + 5856));
    r28 = 0;
    goto loc_8013CAFC;
}

loc_8013CAC4:
{
    r4 = r27;
    r3 = (r29 + 4);
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8013CAD8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8013CAF4;
    }
}

loc_8013CADC:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = MemoryInline::FlatRead32((r31 + 5824));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8013CAE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013CAF4;
    }
}

loc_8013CAEC:
{
    r3 = 1;
    goto loc_8013CB3C;
}

loc_8013CAF4:
{
    r28 = (r28 + 1);
    r29 = (r29 + 12);
}

loc_8013CAFC:
{
    r3 = (r28 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r30));
}

loc_8013CB04:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8013CAC4;
    }
}

loc_8013CB08:
{
    r0 = MemoryInline::FlatRead16((r31 + 5858));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8013CB10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013CB38;
    }
}

loc_8013CB14:
{
    r0 = MemoryInline::FlatRead32((r31 + 5824));
    r4 = r27;
    r3 = (r29 + 4);
    r5 = 6;
    MemoryInline::FlatWrite32(r29, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r31 + 5856));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r31 + 5856), static_cast<uint16_t>(r0));
}

loc_8013CB38:
{
    r3 = 0;
}

loc_8013CB3C:
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

// RECOMP_GUEST_ABI gpr_read=0xF80000FB gpr_write=0xF80008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8013CA78 func_8013CA78 preserves=true fpr_mask=0x00000000
