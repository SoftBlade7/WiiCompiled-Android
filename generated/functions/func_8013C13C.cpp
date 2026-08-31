#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013C13C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8013C13C;

loc_8013C13C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x80330000u;
    r30 = (r30 + 25208);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0;
    r0 = MemoryInline::FlatRead8((r30 + 10176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8013C168:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8013C180;
    }
}

loc_8013C16C:
{
    r3 = 851968;
    r4 = 0x80280000u;
    r3 = (r3 + 2);
    r4 = (r4 + 15440);
    ctx->lr = 0x8013C180u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131740u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8013C180:
{
    ctx->lr = 0x8013C184u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013A300u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C188:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013C194;
    }
}

loc_8013C18C:
{
    r3 = 6;
    goto loc_8013C228;
}

loc_8013C194:
{
    r0 = MemoryInline::FlatRead8((r30 + 6216));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C19C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C224;
    }
}

loc_8013C1A0:
{
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C1A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013C224;
    }
}

loc_8013C1A8:
{
    r0 = MemoryInline::FlatRead8((r30 + 6212));
    r4 = 0;
    MemoryInline::FlatWriteRam8((r30 + 6216), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C1B8:
{
    MemoryInline::FlatWriteRam8((r30 + 6215), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam32((r30 + 5812), r4);
    MemoryInline::FlatWriteRam32((r30 + 5808), r4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C1DC;
    }
}

loc_8013C1C8:
{
    r3 = MemoryInline::FlatRead8((r30 + 6213));
    MemoryInline::FlatWriteRam8((r30 + 6212), static_cast<uint8_t>(r4));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r30 + 6213), static_cast<uint8_t>(r0));
    goto loc_8013C1EC;
}

loc_8013C1DC:
{
    ctx->lr = 0x8013C1E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801446C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
}

loc_8013C1E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013C1EC;
    }
}

loc_8013C1E8:
{
    r29 = 3;
}

loc_8013C1EC:
{
    r31 = 0x80330000u;
    r4 = MemoryInline::FlatRead32((r30 + 5824));
    r31 = (r31 + 25208);
    r3 = MemoryInline::FlatRead32((r31 + 5852));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r30 + 5824), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8013C208:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C218;
    }
}

loc_8013C20C:
{
    ctx->lr = 0x8013C210u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r31 + 5852), r0);
}

loc_8013C218:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r31 + 5856), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r31 + 5858), static_cast<uint16_t>(r0));
}

loc_8013C224:
{
    r3 = r29;
}

loc_8013C228:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8013C13C func_8013C13C preserves=true fpr_mask=0x00000000
