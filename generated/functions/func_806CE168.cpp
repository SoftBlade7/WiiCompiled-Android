#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CE168(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806CE168;

loc_806CE168:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_806CE190:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CE19C;
    }
}

loc_806CE194:
{
    r3 = 0;
    goto loc_806CE33C;
}

loc_806CE19C:
{
    r0 = MemoryInline::FlatRead8((r3 + 428));
    r31 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CE1A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CE1B4;
    }
}

loc_806CE1AC:
{
    ctx->lr = 0x806CE1B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806CC6C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806CE338;
}

loc_806CE1B4:
{
    r0 = MemoryInline::FlatRead8((r3 + 420));
}

loc_806CE1BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806CE2F8;
    }
}

loc_806CE1C0:
{
    r0 = MemoryInline::FlatRead8((r3 + 357));
}

loc_806CE1C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_806CE1F8;
    }
}

loc_806CE1CC:
{
    r4 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 340));
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806CE1E8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r31 = cr;
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
    r31 = (r31_rot_1 & 1);
    goto loc_806CE338;
}

loc_806CE1F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_806CE1FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CE338;
    }
}

loc_806CE200:
{
    r0 = MemoryInline::FlatRead8((r3 + 358));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CE208:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CE238;
    }
}

loc_806CE20C:
{
    r4 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 344));
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4 = MemoryInline::FlatRead32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806CE228:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CE238;
    }
}

loc_806CE230:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 358), static_cast<uint8_t>(r0));
}

loc_806CE238:
{
    r0 = MemoryInline::FlatRead8((r3 + 358));
    r4 = 0;
}

loc_806CE244:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806CE258;
    }
}

loc_806CE248:
{
    r0 = MemoryInline::FlatRead8((r3 + 359));
}

loc_806CE250:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806CE258;
    }
}

loc_806CE254:
{
    r4 = 1;
}

loc_806CE258:
{
}

loc_806CE25C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806CE274;
    }
}

loc_806CE260:
{
    r0 = MemoryInline::FlatRead32((r3 + 188));
}

loc_806CE268:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806CE274;
    }
}

loc_806CE26C:
{
    r0 = MemoryInline::FlatRead16((r3 + 350));
    MemoryInline::FlatWrite16((r3 + 348), static_cast<uint16_t>(r0));
}

loc_806CE274:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806CE278:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CE290;
    }
}

loc_806CE27C:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806CC43Cu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 216));
    r4 = 626;
    ctx->lr = 0x806CE290u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082055Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806CE290:
{
    r0 = MemoryInline::FlatRead8((r30 + 358));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CE298:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CE2B4;
    }
}

loc_806CE29C:
{
    r3 = r30;
    ctx->lr = 0x806CE2A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806CC48Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806CE2A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806CE2B4;
    }
}

loc_806CE2AC:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 360), static_cast<uint16_t>(r0));
}

loc_806CE2B4:
{
    r3 = MemoryInline::FlatRead16((r30 + 360));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = 0;
    r0 = MemoryInline::FlatRead8((r30 + 358));
}

loc_806CE2C4:
{
    MemoryInline::FlatWrite8((r30 + 359), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_806CE2D4;
    }
}

loc_806CE2CC:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 360), static_cast<uint16_t>(r0));
}

loc_806CE2D4:
{
    r3 = MemoryInline::FlatRead16((r30 + 360));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r30 + 348));
}

loc_806CE2E0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_806CE2E8;
    }
}

loc_806CE2E4:
{
    r4 = 1;
}

loc_806CE2E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806CE2EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CE338;
    }
}

loc_806CE2F0:
{
    r31 = 1;
    goto loc_806CE338;
}

loc_806CE2F8:
{
    r4 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 424));
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4 = MemoryInline::FlatRead32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806CE314:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r31 = cr;
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
    r31 = (r31_rot_2 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_806CE320:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CE338;
    }
}

loc_806CE324:
{
    r4 = 0x808A0000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -912));
    MemoryInline::FlatWrite8((r3 + 420), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 424), f0.d);
}

loc_806CE338:
{
    r3 = r31;
}

loc_806CE33C:
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806CE168 func_806CE168 preserves=true fpr_mask=0x00000000
