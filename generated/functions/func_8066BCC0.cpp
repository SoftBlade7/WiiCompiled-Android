#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066BCC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066BCC0;

loc_8066BCC0:
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
    r30 = r3;
    r31 = r4;
    r0 = MemoryInline::FlatRead32((r3 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066BCE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066BD9C;
    }
}

loc_8066BCE4:
{
    r3 = 0x809C0000u;
    r29 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r27 = 0;
    r28 = (r3 + 131072);
}

loc_8066BCF8:
{
    r0 = MemoryInline::FlatRead32((r30 + 88));
    r4 = (r0 - r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8066BD94;
    }
}

loc_8066BD04:
{
    r3 = MemoryInline::FlatRead32((r28 + 20476));
    r3 = (r3 + 131072);
    r3 = (r3 + 13064);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80548B8Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8066BD1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066BD94;
    }
}

loc_8066BD20:
{
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r28 + 20476));
    r0 = (r0 * 900);
    r3 = (r3 + 131072);
    r3 = (r3 + 13064);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8066BD40:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8066BD4C;
    }
}

loc_8066BD44:
{
    r3 = (r3 + 12);
    goto loc_8066BD50;
}

loc_8066BD4C:
{
    r3 = 0;
}

loc_8066BD50:
{
}

loc_8066BD54:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8066BD64;
    }
}

loc_8066BD58:
{
}

loc_8066BD5C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_8066BD78;
    }
}

loc_8066BD60:
{
    goto loc_8066BD88;
}

loc_8066BD64:
{
    r0 = MemoryInline::FlatRead32((r3 + 224));
}

loc_8066BD6C:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r0))) {
        goto loc_8066BD88;
    }
}

loc_8066BD70:
{
    r29 = r0;
    goto loc_8066BD88;
}

loc_8066BD78:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8066BD80:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r0))) {
        goto loc_8066BD88;
    }
}

loc_8066BD84:
{
    r29 = r0;
}

loc_8066BD88:
{
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(10));
}

loc_8066BD90:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066BCF8;
    }
}

loc_8066BD94:
{
    r3 = r29;
    goto loc_8066BDA0;
}

loc_8066BD9C:
{
    r3 = 0;
}

loc_8066BDA0:
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800007B gpr_write=0xF800007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8066BCC0 func_8066BCC0 preserves=true fpr_mask=0x00000000
