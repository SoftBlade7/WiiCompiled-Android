#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80162FEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80162FEC;

loc_80162FEC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80160000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + 12488);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->lr = 0x80163010u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80162C88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80163014:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80163020;
    }
}

loc_80163018:
{
    r3 = -1;
    goto loc_801630B0;
}

loc_80163020:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
}

loc_80163028:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80163030:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801630A4;
    }
}

loc_80163034:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80163038:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801630A4;
    }
}

loc_8016303C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_80163040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801630A4;
    }
}

loc_80163044:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80163048:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80163098;
    }
}

loc_8016304C:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80163054:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801630A4;
    }
}

loc_80163058:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_8016305C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801630A4;
    }
}

loc_80163060:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
}

loc_80163064:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801630A4;
    }
}

loc_80163068:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(33));
}

loc_8016306C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801630A4;
    }
}

loc_80163070:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(34));
}

loc_80163074:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801630A4;
    }
}

loc_80163078:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(41));
}

loc_8016307C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801630A4;
    }
}

loc_80163080:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(42));
}

loc_80163084:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801630A4;
    }
}

loc_80163088:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
}

loc_8016308C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801630A4;
    }
}

loc_80163090:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(37));
}

loc_80163094:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801630A4;
    }
}

loc_80163098:
{
    r3 = (r13 + -26064);
    ctx->lr = 0x801630A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801AA9B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80163028;
}

loc_801630A4:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
}

loc_801630B0:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80162FEC func_80162FEC preserves=true fpr_mask=0x00000000
