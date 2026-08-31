#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052C20C(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8052C20C;

loc_8052C20C:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    r5 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 172), r31);
    MemoryInline::FlatWriteRam32((r1 + 168), r30);
    r30 = r4;
    r4 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 164), r29);
    r29 = r3;
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r5 + 12840));
    r5 = 1;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x8052C250u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052AF64u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052C254:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052C2A8;
    }
}

loc_8052C25C:
{
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    ctx->lr = 0x8052C268u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052B3F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052C26C:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052C284;
    }
}

loc_8052C274:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_8052C27C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052C284;
    }
}

loc_8052C280:
{
    r31 = 3;
}

loc_8052C284:
{
    r3 = (r1 + 12);
    ctx->lr = 0x8052C28Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052B144u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052C290:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052C29C;
    }
}

loc_8052C294:
{
    r31 = 8;
    goto loc_8052C2A8;
}

loc_8052C29C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8052C2A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052C2A8;
    }
}

loc_8052C2A4:
{
    r31 = r3;
}

loc_8052C2A8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 20), static_cast<uint8_t>(r0));
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 172));
    r30 = MemoryInline::FlatRead32((r1 + 168));
    r29 = MemoryInline::FlatRead32((r1 + 164));
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8052C20C func_8052C20C preserves=true fpr_mask=0x00000000
