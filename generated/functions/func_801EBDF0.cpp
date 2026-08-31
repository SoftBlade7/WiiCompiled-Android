#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EBDF0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801EBDF0;

loc_801EBDF0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EBDFC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EBE0C;
    }
}

loc_801EBE04:
{
    r3 = 1;
    goto loc_801EBEB0;
}

loc_801EBE0C:
{
    r0 = MemoryInline::FlatRead32((r13 + -24284));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801EBE14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EBE68;
    }
}

loc_801EBE18:
{
    // inline leaf 0x801E8CD0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -24304));
    // end of inlined leaf 0x801E8CD0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EBE20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EBE2C;
    }
}

loc_801EBE24:
{
    r3 = 0;
    goto loc_801EBEB0;
}

loc_801EBE2C:
{
    r0 = MemoryInline::FlatRead32((r13 + -24280));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801EBE34:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EBE40;
    }
}

loc_801EBE38:
{
    r3 = 1;
    goto loc_801EBEB0;
}

loc_801EBE40:
{
    r3 = MemoryInline::FlatRead32((r13 + -24288));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EBE48:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801EBE60;
    }
}

loc_801EBE4C:
{
    r0 = (r3 + -1);
    r3 = 0;
    MemoryInline::FlatWrite32((r13 + -24284), r3);
    MemoryInline::FlatWrite32((r13 + -24288), r0);
    goto loc_801EBEAC;
}

loc_801EBE60:
{
    r3 = 1;
    goto loc_801EBEB0;
}

loc_801EBE68:
{
    r5 = 0x80350000u;
    r3 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r5 + 29152), r4);
    r8 = 0x80350000u;
    r6 = (r5 + 29152);
    r4 = MemoryInline::FlatRead32((r13 + -27952));
    r3 = (r3 + 8960);
    r8 = (r8 + 29184);
    r5 = 40;
    r7 = 32;
    r9 = 32;
    r10 = (r13 + -24280);
    ctx->lr = 0x801EBE9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E8C74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EBEA0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EBEAC;
    }
}

loc_801EBEA4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -24284), r0);
}

loc_801EBEAC:
{
    r3 = 0;
}

loc_801EBEB0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801EBDF0 func_801EBDF0 preserves=true fpr_mask=0x00000000
