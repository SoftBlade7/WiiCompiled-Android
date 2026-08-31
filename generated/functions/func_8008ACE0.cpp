#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008ACE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8008ACE0;

loc_8008ACE0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32(r29);
    r31 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008AD10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008AD1C;
    }
}

loc_8008AD14:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8008AE0C;
}

loc_8008AD1C:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8008AD24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008AD3C;
    }
}

loc_8008AD28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8008AD2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008AD70;
    }
}

loc_8008AD30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8008AD34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008AD9C;
    }
}

loc_8008AD38:
{
    goto loc_8008ADC4;
}

loc_8008AD3C:
{
    r4 = r30;
    r3 = (r1 + 8);
    r5 = 32;
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
    r5 = MemoryInline::FlatRead16((r30 + 32));
    r4 = MemoryInline::FlatRead16((r30 + 34));
    r3 = MemoryInline::FlatRead16((r30 + 36));
    r0 = MemoryInline::FlatRead16((r30 + 38));
    MemoryInline::FlatWriteRam16((r1 + 40), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r1 + 42), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r0));
    goto loc_8008ADC4;
}

loc_8008AD70:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 32;
    ctx->lr = 0x8008AD80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    r3 = 2048;
    MemoryInline::FlatWriteRam16((r1 + 40), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 42), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r0));
    goto loc_8008ADC4;
}

loc_8008AD9C:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 32;
    ctx->lr = 0x8008ADACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    r3 = 256;
    MemoryInline::FlatWriteRam16((r1 + 40), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 42), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r0));
}

loc_8008ADC4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32(r29);
    r30 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8008ADD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008ADE0;
    }
}

loc_8008ADD8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_8008AE04;
}

loc_8008ADE0:
{
    r3 = (r4 + 166);
    r4 = (r1 + 8);
    r5 = 40;
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
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = r30;
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32((r29 + 4), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8008AE04:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8008AE0C:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000FB gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8008ACE0 func_8008ACE0 preserves=true fpr_mask=0x00000000
