#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_805BC9DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805BC9DC;

loc_805BC9DC:
{
    MemoryInline::FlatWriteRam32((r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    MemoryInline::FlatWriteRam32((r1 + 220), r27);
    MemoryInline::FlatWriteRam32((r1 + 224), r28);
    MemoryInline::FlatWriteRam32((r1 + 228), r29);
    MemoryInline::FlatWriteRam32((r1 + 232), r30);
    MemoryInline::FlatWriteRam32((r1 + 236), r31);
    r29 = r3;
    r3 = (r1 + 8);
    r31 = 0;
    r28 = MemoryInline::FlatRead32((r4 + -10456));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_6DD = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_6DD[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_6DD[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[27] = r27;
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
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = 0x809C0000u;
    r30 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_805BCA1C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(54))) {
        goto loc_805BCA28;
    }
}

loc_805BCA20:
{
}

loc_805BCA24:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(55))) {
        goto loc_805BCAB8;
    }
}

loc_805BCA28:
{
}

loc_805BCA2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(53))) {
        goto loc_805BCA3C;
    }
}

loc_805BCA30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(56));
}

loc_805BCA34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCB24;
    }
}

loc_805BCA38:
{
    goto loc_805BCB60;
}

loc_805BCA3C:
{
    r27 = MemoryInline::FlatRead32((r28 + 9064));
    r3 = r27;
    // inline leaf 0x80860B54 (13 guest instruction(s))
}

loc_inl0_0x80860B54:
{
}

loc_inl0_0x80860B58:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_inl0_0x80860B78;
    }
}

loc_inl0_0x80860B5C:
{
}

loc_inl0_0x80860B60:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(8))) {
        goto loc_inl0_0x80860B78;
    }
}

loc_inl0_0x80860B64:
{
    r4 = 0x808B0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -1696);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
    goto loc_inl0_cont_80860B54;
}

loc_inl0_0x80860B78:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 25);
}

loc_inl0_cont_80860B54:
{
    // end of inlined leaf 0x80860B54
    r0 = MemoryInline::FlatRead32((r28 + 9036));
    r30 = r3;
    r31 = 1421;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805BCA58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCA70;
    }
}

loc_805BCA5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805BCA60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCA7C;
    }
}

loc_805BCA64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805BCA68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCA88;
    }
}

loc_805BCA6C:
{
    goto loc_805BCAA8;
}

loc_805BCA70:
{
    r0 = 1417;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    goto loc_805BCAA8;
}

loc_805BCA7C:
{
    r0 = 1418;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    goto loc_805BCAA8;
}

loc_805BCA88:
{
    r0 = MemoryInline::FlatRead32((r28 + 9072));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805BCA90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCAA0;
    }
}

loc_805BCA94:
{
    r0 = 1420;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    goto loc_805BCAA8;
}

loc_805BCAA0:
{
    r0 = 1419;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
}

loc_805BCAA8:
{
    r3 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80833638u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    goto loc_805BCB60;
}

loc_805BCAB8:
{
    r0 = MemoryInline::FlatRead32((r28 + 9036));
    r3 = 0x80890000u;
    r3 = (r3 + 11064);
    r31 = 1422;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805BCACC:
{
    r30 = (r3 + 536);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCAE8;
    }
}

loc_805BCAD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805BCAD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCAF4;
    }
}

loc_805BCADC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805BCAE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCB00;
    }
}

loc_805BCAE4:
{
    goto loc_805BCB60;
}

loc_805BCAE8:
{
    r0 = 1417;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    goto loc_805BCB60;
}

loc_805BCAF4:
{
    r0 = 1418;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    goto loc_805BCB60;
}

loc_805BCB00:
{
    r0 = MemoryInline::FlatRead32((r28 + 9072));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805BCB08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCB18;
    }
}

loc_805BCB0C:
{
    r0 = 1420;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    goto loc_805BCB60;
}

loc_805BCB18:
{
    r0 = 1419;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    goto loc_805BCB60;
}

loc_805BCB24:
{
    r0 = MemoryInline::FlatRead32((r28 + 9048));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805BCB2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCB3C;
    }
}

loc_805BCB30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805BCB34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BCB50;
    }
}

loc_805BCB38:
{
    goto loc_805BCB60;
}

loc_805BCB3C:
{
    r3 = 0x80890000u;
    r31 = 1415;
    r3 = (r3 + 11064);
    r30 = (r3 + 549);
    goto loc_805BCB60;
}

loc_805BCB50:
{
    r3 = 0x80890000u;
    r31 = 1416;
    r3 = (r3 + 11064);
    r30 = (r3 + 565);
}

loc_805BCB60:
{
    r28 = 0x80890000u;
    r5 = r30;
    r28 = (r28 + 11064);
    r3 = (r29 + 416);
    r4 = (r28 + 578);
    ctx->lr = 0x805BCB78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063E0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = r31;
    r3 = (r29 + 416);
    r4 = (r28 + 587);
    r6 = (r1 + 8);
    ctx->lr = 0x805BCB8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r27 = MemoryInline::FlatRead32((r1 + 220));
    r28 = MemoryInline::FlatRead32((r1 + 224));
    r29 = MemoryInline::FlatRead32((r1 + 228));
    r30 = MemoryInline::FlatRead32((r1 + 232));
    r31 = MemoryInline::FlatRead32((r1 + 236));
    r0 = MemoryInline::FlatRead32((r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 240);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805BC9DC func_805BC9DC preserves=true fpr_mask=0x00000000
