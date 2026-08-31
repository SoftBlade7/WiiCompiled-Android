#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_805BCC24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805BCC24;

loc_805BCC24:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    MemoryInline::FlatWriteRam32((r1 + 220), r31);
    MemoryInline::FlatWriteRam32((r1 + 216), r30);
    MemoryInline::FlatWriteRam32((r1 + 212), r29);
    MemoryInline::FlatWriteRam32((r1 + 208), r28);
    r28 = r3;
    r6 = MemoryInline::FlatRead32((r4 + 7736));
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r4 = MemoryInline::FlatRead32(r6);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_805BCC60:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(53))) {
        goto loc_805BCC6C;
    }
}

loc_805BCC64:
{
}

loc_805BCC68:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(54))) {
        goto loc_805BCC80;
    }
}

loc_805BCC6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(55));
}

loc_805BCC70:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805BCDA4;
    }
}

loc_805BCC74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(56));
}

loc_805BCC78:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805BCCCC;
    }
}

loc_805BCC7C:
{
    goto loc_805BCDA4;
}

loc_805BCC80:
{
    r0 = MemoryInline::FlatRead8((r3 + 5997));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805BCC88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCCA0;
    }
}

loc_805BCC8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805BCC90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCCA8;
    }
}

loc_805BCC94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_805BCC98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCCB0;
    }
}

loc_805BCC9C:
{
    goto loc_805BCCB8;
}

loc_805BCCA0:
{
    r4 = 1219;
    goto loc_805BCCBC;
}

loc_805BCCA8:
{
    r4 = 1220;
    goto loc_805BCCBC;
}

loc_805BCCB0:
{
    r4 = 1221;
    goto loc_805BCCBC;
}

loc_805BCCB8:
{
    r4 = 1222;
}

loc_805BCCBC:
{
    r5 = 0;
    r3 = (r3 + 1160);
    ctx->lr = 0x805BCCC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805BCDA4;
}

loc_805BCCCC:
{
    r3 = MemoryInline::FlatRead32((r6 + 152));
    r30 = 0;
    r29 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 112));
}

loc_805BCCE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805BCCF0;
    }
}

loc_805BCCE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805BCCE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCD28;
    }
}

loc_805BCCEC:
{
    goto loc_805BCD60;
}

loc_805BCCF0:
{
    r0 = MemoryInline::FlatRead32((r5 + 2932));
}

loc_805BCCF8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(9))) {
        goto loc_805BCD04;
    }
}

loc_805BCCFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_805BCD00:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805BCD10;
    }
}

loc_805BCD04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_805BCD08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCD1C;
    }
}

loc_805BCD0C:
{
    goto loc_805BCD68;
}

loc_805BCD10:
{
    r30 = 1216;
    r29 = 1332;
    goto loc_805BCD68;
}

loc_805BCD1C:
{
    r30 = 1224;
    r29 = 1333;
    goto loc_805BCD68;
}

loc_805BCD28:
{
    r0 = MemoryInline::FlatRead32((r5 + 2932));
}

loc_805BCD30:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(9))) {
        goto loc_805BCD3C;
    }
}

loc_805BCD34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_805BCD38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805BCD48;
    }
}

loc_805BCD3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_805BCD40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCD54;
    }
}

loc_805BCD44:
{
    goto loc_805BCD68;
}

loc_805BCD48:
{
    r30 = 1217;
    r29 = 1333;
    goto loc_805BCD68;
}

loc_805BCD54:
{
    r30 = 1223;
    r29 = 1332;
    goto loc_805BCD68;
}

loc_805BCD60:
{
    r29 = 1218;
    r30 = 0;
}

loc_805BCD68:
{
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_17F9 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_17F9[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_17F9[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r31 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 44), r30);
    r31 = (r31 + 11064);
    r5 = r29;
    r3 = (r28 + 1160);
    r6 = (r1 + 8);
    r4 = (r31 + 601);
    ctx->lr = 0x805BCD90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DCBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = r30;
    r3 = (r28 + 1160);
    r4 = (r31 + 609);
    r6 = 0;
    ctx->lr = 0x805BCDA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DCBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805BCDA4:
{
    r0 = MemoryInline::FlatRead32((r1 + 228));
    r31 = MemoryInline::FlatRead32((r1 + 220));
    r30 = MemoryInline::FlatRead32((r1 + 216));
    r29 = MemoryInline::FlatRead32((r1 + 212));
    r28 = MemoryInline::FlatRead32((r1 + 208));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805BCC24 func_805BCC24 preserves=true fpr_mask=0x00000000
