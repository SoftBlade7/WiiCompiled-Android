#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023AA78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023AA78;

loc_8023AA78:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r6 = (r13 + -27736);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r6 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8019B43Cu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023AA9C:
{
    MemoryInline::FlatWrite32((r31 + 12), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023AABC;
    }
}

loc_8023AAA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-6));
}

loc_8023AAA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023AABC;
    }
}

loc_8023AAAC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_8023AB40;
}

loc_8023AABC:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x8023AAC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023AC3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023AAD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023AADC;
    }
}

loc_8023AAD4:
{
    r3 = 0;
    goto loc_8023AB40;
}

loc_8023AADC:
{
    r3 = (r1 + 8);
    ctx->lr = 0x8023AAE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019E40Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023AAE8:
{
    MemoryInline::FlatWrite32((r31 + 12), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023AB00;
    }
}

loc_8023AAF0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_8023AB40;
}

loc_8023AB00:
{
    r3 = (r13 + -27736);
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8019BEE8u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023AB14:
{
    MemoryInline::FlatWrite32((r31 + 12), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023AB34;
    }
}

loc_8023AB1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-6));
}

loc_8023AB20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023AB34;
    }
}

loc_8023AB24:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_8023AB40;
}

loc_8023AB34:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    r3 = 1;
}

loc_8023AB40:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8023AA78 func_8023AA78 preserves=true fpr_mask=0x00000000
