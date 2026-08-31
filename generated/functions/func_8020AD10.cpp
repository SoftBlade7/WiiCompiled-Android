#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020AD10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8020AD10;

loc_8020AD10:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r0 = MemoryInline::FlatRead32((r13 + -24224));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8020AD28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8020AD44;
    }
}

loc_8020AD2C:
{
    r4 = MemoryInline::FlatRead32((r13 + -24208));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8020AD34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020AD44;
    }
}

loc_8020AD38:
{
    r0 = (r3 * 320);
    r31 = (r4 + r0);
    goto loc_8020AD48;
}

loc_8020AD44:
{
    r31 = 0;
}

loc_8020AD48:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8020AD4C:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_8020AD5C;
    }
}

loc_8020AD50:
{
    r0 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020AD58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020AD70;
    }
}

loc_8020AD5C:
{
    r4 = 65536;
    r3 = -1;
    r0 = (r4 + -20477);
    MemoryInline::FlatWrite32((r13 + -24220), r0);
    goto loc_8020ADE4;
}

loc_8020AD70:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020AD78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020AD90;
    }
}

loc_8020AD7C:
{
    r4 = 65536;
    r3 = -1;
    r0 = (r4 + -20477);
    MemoryInline::FlatWrite32((r13 + -24220), r0);
    goto loc_8020ADE4;
}

loc_8020AD90:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_8020ADA0;
    }
}

loc_8020AD94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020ADA0;
    }
}

loc_8020AD98:
{
    r4 = 0;
    ctx->lr = 0x8020ADA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020C380u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8020ADA0:
{
    r0 = MemoryInline::FlatRead8((r31 + 20));
    r4 = (r1 + 8);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->lr = 0x8020ADB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80207BB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020ADB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020ADD0;
    }
}

loc_8020ADB8:
{
    ctx->lr = 0x8020ADBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802079F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020ADC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020ADC8;
    }
}

loc_8020ADC4:
{
    MemoryInline::FlatWrite32((r13 + -24220), r3);
}

loc_8020ADC8:
{
    r3 = -1;
    goto loc_8020ADE4;
}

loc_8020ADD0:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r4 = MemoryInline::FlatRead32((r1 + 20));
    r0 = (r3 * r0);
    r3 = (r4 * r0);
}

loc_8020ADE4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8020AD10 func_8020AD10 preserves=true fpr_mask=0x00000000
