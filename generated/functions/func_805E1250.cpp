#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_806212FC_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_806212FC_statefree_v0(uint32_t, uint32_t);

extern "C" void func_805E1250(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805E1250;

loc_805E1250:
{
    r4 = MemoryInline::FlatRead32((r3 + 152));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
}

loc_805E1258:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805E1270;
    }
}

loc_805E125C:
{
}

loc_805E1260:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(5))) {
        goto loc_805E1354;
    }
}

loc_805E1264:
{
}

loc_805E1268:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(6))) {
        goto loc_805E12EC;
    }
}

loc_805E126C:
{
    goto loc_805E1354;
}

loc_805E1270:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x806212FCu) && KnownTranslatedCpuCall<0x806212FCu>::kAvailable && !KnownTranslatedCpuCall<0x806212FCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x806212FCu>()) {
        const auto state_free_result_806212FC_738 = func_806212FC_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_806212FC_738[0]);
        r3 = static_cast<uint32_t>(state_free_result_806212FC_738[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x806212FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_805E1284:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805E1548;
    }
}

loc_805E1288:
{
    r3 = MemoryInline::FlatRead32((r31 + 152));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 152), r0);
}

loc_805E1298:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_805E1548;
    }
}

loc_805E129C:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r3 = (r31 + r3);
    r5 = MemoryInline::FlatRead32((r3 + 84));
}

loc_805E12AC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805E1548;
    }
}

loc_805E12B0:
{
}

loc_805E12B4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805E12C4;
    }
}

loc_805E12B8:
{
}

loc_805E12BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_805E12D8;
    }
}

loc_805E12C0:
{
    goto loc_805E1548;
}

loc_805E12C4:
{
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r4 = (r0 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621CE0 (11 guest instruction(s))
}

loc_inl0_0x80621CE0:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_inl0_0x80621CE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80621CEC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_inl0_0x80621CF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80621CF8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 288), r4);
    MemoryInline::FlatWrite32((r3 + 292), r5);
    goto loc_inl0_cont_80621CE0;
}

loc_inl0_return:
{
}

loc_inl0_cont_80621CE0:
{
    // end of inlined leaf 0x80621CE0
    goto loc_805E1548;
}

loc_805E12D8:
{
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r4 = MemoryInline::FlatRead32((r31 + 100));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621CB0 (12 guest instruction(s))
}

loc_inl1_0x80621CB0:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_inl1_0x80621CB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80621CBC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_inl1_0x80621CC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80621CC8:
{
    r5 = 1;
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 288), r0);
    MemoryInline::FlatWrite32((r3 + 292), r4);
    goto loc_inl1_cont_80621CB0;
}

loc_inl1_return:
{
}

loc_inl1_cont_80621CB0:
{
    // end of inlined leaf 0x80621CB0
    goto loc_805E1548;
}

loc_805E12EC:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 152), r0);
}

loc_805E12F8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_805E1548;
    }
}

loc_805E12FC:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r3 = (r3 + r4);
    r5 = MemoryInline::FlatRead32((r3 + 84));
}

loc_805E130C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805E1548;
    }
}

loc_805E1310:
{
}

loc_805E1314:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805E1324;
    }
}

loc_805E1318:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_805E131C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E133C;
    }
}

loc_805E1320:
{
    goto loc_805E1548;
}

loc_805E1324:
{
    r3 = 0x809C0000u;
    r4 = (r0 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621CE0 (11 guest instruction(s))
}

loc_inl2_0x80621CE0:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_inl2_0x80621CE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80621CEC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_inl2_0x80621CF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80621CF8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 288), r4);
    MemoryInline::FlatWrite32((r3 + 292), r5);
    goto loc_inl2_cont_80621CE0;
}

loc_inl2_return:
{
}

loc_inl2_cont_80621CE0:
{
    // end of inlined leaf 0x80621CE0
    goto loc_805E1548;
}

loc_805E133C:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r31 + 100));
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80621CB0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_805E1548;
}

loc_805E1354:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 148), r0);
}

loc_805E1548:
{
    r0 = MemoryInline::FlatRead32((r31 + 148));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E1550:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E15AC;
    }
}

loc_805E1554:
{
    r3 = MemoryInline::FlatRead32((r31 + 156));
    r0 = (r3 + -3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_805E1560:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805E157C;
    }
}

loc_805E1564:
{
    r0 = (r3 + -9);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_805E156C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805E157C;
    }
}

loc_805E1570:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(8));
}

loc_805E1574:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E1594;
    }
}

loc_805E1578:
{
    goto loc_805E15A4;
}

loc_805E157C:
{
    r0 = MemoryInline::FlatRead32((r31 + 156));
    r3 = r31;
    MemoryInline::FlatWrite32((r31 + 148), r0);
    r4 = 1;
    ctx->lr = 0x805E1590u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E1998u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805E15A4;
}

loc_805E1594:
{
    MemoryInline::FlatWrite32((r31 + 148), r3);
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x805E15A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E1998u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805E15A4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 156), r0);
}

loc_805E15AC:
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
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805E1250 func_805E1250 preserves=true fpr_mask=0x00000000
