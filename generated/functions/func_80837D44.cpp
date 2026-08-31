#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80837D44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80837D44;

loc_80837D44:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 1012));
    MemoryInline::FlatWrite8((r3 + 1068), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80837D68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80837E2C;
    }
}

loc_80837D6C:
{
    r3 = 75;
    ctx->lr = 0x80837D74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80842354u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 1732));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80837D7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80837DA8;
    }
}

loc_80837D80:
{
    r12 = MemoryInline::FlatRead32(r31);
    r6 = 0x808B0000u;
    r3 = r31;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    r4 = MemoryInline::FlatRead32((r31 + 1012));
    f1.d = MemoryInline::FlatReadFloat32((r6 + -13516));
    ctr = r12;
    ctx->lr = 0x80837DA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80837DB0;
}

loc_80837DA8:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 1012), r0);
}

loc_80837DB0:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(133));
}

loc_80837DC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80837E2C;
    }
}

loc_80837DC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(134));
}

loc_80837DCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80837E2C;
    }
}

loc_80837DD0:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
}

loc_80837DD8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(109))) {
        goto loc_80837DF4;
    }
}

loc_80837DDC:
{
}

loc_80837DE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(80))) {
        goto loc_80837DF4;
    }
}

loc_80837DE4:
{
}

loc_80837DE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(78))) {
        goto loc_80837DF4;
    }
}

loc_80837DEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(79));
}

loc_80837DF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80837E2C;
    }
}

loc_80837DF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(130));
}

loc_80837DF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80837E2C;
    }
}

loc_80837DFC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 5976));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_80837E0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80837E1C;
    }
}

loc_80837E10:
{
    r3 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite32((r3 + 332), r0);
    goto loc_80837E2C;
}

loc_80837E1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(42));
}

loc_80837E20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80837E2C;
    }
}

loc_80837E24:
{
    r3 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite32((r3 + 336), r0);
}

loc_80837E2C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80837D44 func_80837D44 preserves=true fpr_mask=0x00000000
