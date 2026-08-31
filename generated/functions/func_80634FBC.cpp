#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80631588_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_80634FBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80634FBC;

loc_80634FBC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80634FDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80634FFC;
    }
}

loc_80634FE0:
{
    r4 = 0x80380000u;
    r4 = MemoryInline::FlatRead32((r4 + 24576));
    r0 = MemoryInline::FlatRead32((r4 + 112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80634FF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80634FFC;
    }
}

loc_80634FF4:
{
    r3 = (r3 + 52);
    ctx->lr = 0x80634FFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8061B5A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80634FFC:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r0 = 0;
    r31 = MemoryInline::FlatRead32((r30 + 12));
    r4 = -1;
    MemoryInline::FlatWrite32((r30 + 20), r3);
    r3 = r31;
    MemoryInline::FlatWrite32((r30 + 12), r4);
    MemoryInline::FlatWrite32((r30 + 28), r0);
    MemoryInline::FlatWrite32((r30 + 24), r0);
    MemoryInline::FlatWrite32((r30 + 44), r4);
    MemoryInline::FlatWrite32((r30 + 48), r0);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80631588u) && KnownTranslatedCpuCall<0x80631588u>::kAvailable && !KnownTranslatedCpuCall<0x80631588u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80631588u>()) {
        const auto state_free_result_80631588_A3D = func_80631588_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80631588_A3D[0]);
        cr = static_cast<uint32_t>(state_free_result_80631588_A3D[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80631588u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 + -2);
    r3 = (r30 + 52);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_0 & 134217727);
    // inline leaf 0x8061B338 (8 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r3 + 12), r0);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    MemoryInline::FlatWrite32((r3 + 60), r0);
    MemoryInline::FlatWrite32((r3 + 76), r0);
    // end of inlined leaf 0x8061B338
    r3 = 1032;
    ctx->lr = 0x80635050u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80635054:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063505C;
    }
}

loc_80635058:
{
    ctx->lr = 0x8063505Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80621D0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8063505C:
{
    MemoryInline::FlatWrite32(r30, r3);
    r4 = r31;
    ctx->lr = 0x80635068u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80621E00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
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
// RECOMP_REGISTRATION base 0x80634FBC func_80634FBC preserves=true fpr_mask=0x00000000
