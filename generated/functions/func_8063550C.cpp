#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80631588_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80634B80_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_8063550C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8063550C;

loc_8063550C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r3 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80635530:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063553C;
    }
}

loc_80635534:
{
    r3 = MemoryInline::FlatRead32((r3 + 144));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80621434u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8063553C:
{
    r3 = MemoryInline::FlatRead32(r30);
    ctx->lr = 0x80635544u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806224F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 144));
    ctx->lr = 0x8063554Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80620B40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 48));
}

loc_80635554:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80635564;
    }
}

loc_80635558:
{
}

loc_8063555C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_806355E8;
    }
}

loc_80635560:
{
    goto loc_80635678;
}

loc_80635564:
{
    r0 = MemoryInline::FlatRead32((r30 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8063556C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806355D8;
    }
}

loc_80635570:
{
    r29 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r29 + 24520));
    r3 = MemoryInline::FlatRead32((r3 + 84));
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80635590u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r3 + -1);
    r0 = (r4 | r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_806355A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806355D8;
    }
}

loc_806355A4:
{
    r0 = MemoryInline::FlatRead32((r30 + 40));
    r4 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r29 + 24520));
    r3 = MemoryInline::FlatRead32((r3 + 84));
    r3 = MemoryInline::FlatRead32((r3 + 36));
    // inline leaf 0x8021522C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead8(r4);
    r5 = MemoryInline::FlatRead8((r4 + 1));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8021522C
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl1_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl1_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl1_cont_8051BED0;
}

loc_inl1_return:
{
}

loc_inl1_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    ctx->lr = 0x806355C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8051B094u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0;
    r0 = 3;
    MemoryInline::FlatWrite32((r30 + 44), r3);
    MemoryInline::FlatWrite32((r30 + 48), r0);
}

loc_806355D8:
{
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 28), r0);
    goto loc_80635678;
}

loc_806355E8:
{
    r0 = MemoryInline::FlatRead32((r30 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806355F0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8063566C;
    }
}

loc_806355F4:
{
    r29 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r29 + 24520));
    r3 = MemoryInline::FlatRead32((r3 + 84));
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80635614u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r3 + -1);
    r0 = (r4 | r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80635624:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8063566C;
    }
}

loc_80635628:
{
    r0 = MemoryInline::FlatRead32((r30 + 40));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r29 + 24520));
    r3 = MemoryInline::FlatRead32((r3 + 84));
    r3 = MemoryInline::FlatRead32((r3 + 36));
    // inline leaf 0x8021522C (7 guest instruction(s))
    r6 = MemoryInline::FlatRead8(r4);
    r5 = MemoryInline::FlatRead8((r4 + 1));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8021522C
    r3 = MemoryInline::FlatRead32((r30 + 12));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x80631588u) && KnownTranslatedCpuCall<0x80631588u>::kAvailable && !KnownTranslatedCpuCall<0x80631588u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80631588u>()) {
        const auto state_free_result_80631588_29C8 = func_80631588_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80631588_29C8[0]);
        cr = static_cast<uint32_t>(state_free_result_80631588_29C8[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80631588u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r29 = r3;
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl3_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl3_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl3_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl3_cont_8051BED0;
}

loc_inl3_return:
{
}

loc_inl3_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r4 = r29;
    ctx->lr = 0x8063565Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8051AFE8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0;
    r0 = 4;
    MemoryInline::FlatWrite32((r30 + 44), r3);
    MemoryInline::FlatWrite32((r30 + 48), r0);
}

loc_8063566C:
{
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 28), r0);
}

loc_80635678:
{
    r3 = MemoryInline::FlatRead32((r30 + 44));
    r31 = 0;
}

loc_80635684:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8063569C;
    }
}

loc_80635688:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 44), r0);
}

loc_80635694:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(23))) {
        goto loc_8063569C;
    }
}

loc_80635698:
{
    r31 = 1;
}

loc_8063569C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_806356A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806356C0;
    }
}

loc_806356A4:
{
    r3 = MemoryInline::FlatRead32(r30);
    ctx->lr = 0x806356ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80622C08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 11760));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806356B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806356C0;
    }
}

loc_806356BC:
{
    ctx->lr = 0x806356C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80782528u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806356C0:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 36), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806356D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806356DC;
    }
}

loc_806356D4:
{
    ctx->lr = 0x806356D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80622EC8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 36), r3);
}

loc_806356DC:
{
    r3 = MemoryInline::FlatRead32((r30 + 144));
    // inline leaf 0x806213A4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x806213A4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806356E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806356F8;
    }
}

loc_806356EC:
{
    r0 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r30 + 36), r0);
}

loc_806356F8:
{
    r3 = 0x80380000u;
    r0 = MemoryInline::FlatRead32((r30 + 36));
    r3 = MemoryInline::FlatRead32((r3 + 24520));
    r0 = (r0 & 1);
    r3 = MemoryInline::FlatRead32((r3 + 84));
    r29 = (r0 ^ 1);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80635724u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r3 + -1);
    r3 = (r4 | r0);
    r0 = MemoryInline::FlatRead32((r30 + 48));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r4 = (r4 ^ 1);
    r3 = 0x809C0000u;
    r6 = (r29 & r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r5 = (0 - r6);
    r3 = MemoryInline::FlatRead32((r3 + -10504));
    r5 = (r5 | r6);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_1 & 134217727);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & 1);
    r0 = MemoryInline::FlatRead8((r3 + 77));
    r5 = (r5 & r4);
    r4 = (0 - r5);
    r4 = (r4 | r5);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
}

loc_80635774:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_8063577C;
    }
}

loc_80635778:
{
    MemoryInline::FlatWrite8((r3 + 77), static_cast<uint8_t>(r4));
}

loc_8063577C:
{
    r0 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80635784:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806357A0;
    }
}

loc_80635788:
{
    r3 = MemoryInline::FlatRead32((r30 + 12));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x80634B80u) && KnownTranslatedCpuCall<0x80634B80u>::kAvailable && !KnownTranslatedCpuCall<0x80634B80u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80634B80u>()) {
        const auto state_free_result_80634B80_5005 = func_80634B80_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80634B80_5005[0]);
        cr = static_cast<uint32_t>(state_free_result_80634B80_5005[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80634B80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_80635794:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806357A0;
    }
}

loc_80635798:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_806357A0:
{
    r3 = MemoryInline::FlatRead32(r30);
    r30 = 0;
    ctx->lr = 0x806357ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80622F88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806357B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806357BC;
    }
}

loc_806357B4:
{
}

loc_806357B8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_806357C0;
    }
}

loc_806357BC:
{
    r30 = 1;
}

loc_806357C0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
}

loc_806357C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806357F8;
    }
}

loc_806357C8:
{
    ctx->lr = 0x806357CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80162B50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(8));
}

loc_806357D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806357F8;
    }
}

loc_806357D4:
{
    ctx->lr = 0x806357D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80162C38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x806357DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80162B50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(8));
}

loc_806357E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80635820;
    }
}

loc_806357E4:
{
    r3 = 0x80380000u;
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 24512));
    MemoryInline::FlatWrite8((r3 + 80), static_cast<uint8_t>(r0));
    goto loc_80635820;
}

loc_806357F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_806357FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80635820;
    }
}

loc_80635800:
{
    ctx->lr = 0x80635804u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80162B50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(8));
}

loc_80635808:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80635820;
    }
}

loc_8063580C:
{
    r3 = 0x80380000u;
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 24512));
    MemoryInline::FlatWrite8((r3 + 80), static_cast<uint8_t>(r0));
    ctx->lr = 0x80635820u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80162BFCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_80635820:
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8063550C func_8063550C preserves=true fpr_mask=0x00000000
