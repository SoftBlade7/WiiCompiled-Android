#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001C024(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001C024;

loc_8001C024:
{
    MemoryInline::FlatWriteRam32((r1 + -1312), r1);
    r1 = (r1 + -1312);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 1316), r0);
    MemoryInline::FlatWriteRam32((r1 + 1292), r27);
    MemoryInline::FlatWriteRam32((r1 + 1296), r28);
    MemoryInline::FlatWriteRam32((r1 + 1300), r29);
    MemoryInline::FlatWriteRam32((r1 + 1304), r30);
    MemoryInline::FlatWriteRam32((r1 + 1308), r31);
    r27 = r3;
    r28 = r4;
    r30 = 0;
    r0 = MemoryInline::FlatRead32((r13 + -27560));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001C048:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001C054;
    }
}

loc_8001C04C:
{
    r3 = -10001;
    goto loc_8001C0C4;
}

loc_8001C054:
{
    r31 = 0x802A0000u;
    goto loc_8001C098;
}

loc_8001C05C:
{
    r30 = 0;
    ctx->lr = 0x8001C064u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000B7ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001C068:
{
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001C098;
    }
}

loc_8001C070:
{
    r4 = r28;
    r3 = (r1 + 8);
    ctx->lr = 0x8001C07Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000B850u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001C080:
{
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001C098;
    }
}

loc_8001C088:
{
    r5 = r29;
    r3 = (r31 + 18864);
    r4 = (r1 + 8);
    ctx->lr = 0x8001C098u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BD68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8001C098:
{
    r3 = (r31 + 18864);
    // inline leaf 0x8001BD3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x8001BD3C
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r28));
}

loc_8001C0A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8001C05C;
    }
}

loc_8001C0A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8001C0AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001C0C0;
    }
}

loc_8001C0B0:
{
    r4 = r27;
    r5 = r28;
    r3 = (r31 + 18864);
    ctx->lr = 0x8001C0C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BE70u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8001C0C0:
{
    r3 = r30;
}

loc_8001C0C4:
{
    r27 = MemoryInline::FlatRead32((r1 + 1292));
    r28 = MemoryInline::FlatRead32((r1 + 1296));
    r29 = MemoryInline::FlatRead32((r1 + 1300));
    r30 = MemoryInline::FlatRead32((r1 + 1304));
    r31 = MemoryInline::FlatRead32((r1 + 1308));
    r0 = MemoryInline::FlatRead32((r1 + 1316));
    ctx->lr = r0;
    r1 = (r1 + 1312);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC003FFB gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001C024 func_8001C024 preserves=true fpr_mask=0x00000000
