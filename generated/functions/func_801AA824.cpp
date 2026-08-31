#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AA824(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AA824;

loc_801AA824:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = MemoryInline::FlatRead32((r29 + 716));
    r31 = r3;
    r0 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801AA854:
{
    MemoryInline::FlatWrite32((r29 + 716), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AA990;
    }
}

loc_801AA85C:
{
    r0 = MemoryInline::FlatRead16((r29 + 712));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_801AA864:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AA97C;
    }
}

loc_801AA868:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AA87C;
    }
}

loc_801AA86C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801AA870:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AA898;
    }
}

loc_801AA874:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AA888;
    }
}

loc_801AA878:
{
    goto loc_801AA97C;
}

loc_801AA87C:
{
}

loc_801AA880:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5))) {
        goto loc_801AA97C;
    }
}

loc_801AA884:
{
    goto loc_801AA8A4;
}

loc_801AA888:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -25316), r0);
    MemoryInline::FlatWrite16((r29 + 712), static_cast<uint16_t>(r0));
    goto loc_801AA97C;
}

loc_801AA898:
{
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A9960u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801AA97C;
}

loc_801AA8A4:
{
    r4 = MemoryInline::FlatRead32((r29 + 736));
    r5 = MemoryInline::FlatRead32((r29 + 740));
}

loc_801AA8B0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801AA8C0;
    }
}

loc_801AA8B4:
{
    r3 = MemoryInline::FlatRead32((r29 + 732));
    MemoryInline::FlatWrite32((r3 + 4), r5);
    goto loc_801AA8C4;
}

loc_801AA8C0:
{
    MemoryInline::FlatWrite32((r4 + 740), r5);
}

loc_801AA8C4:
{
}

loc_801AA8C8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_801AA8D8;
    }
}

loc_801AA8CC:
{
    r3 = MemoryInline::FlatRead32((r29 + 732));
    MemoryInline::FlatWrite32(r3, r4);
    goto loc_801AA8DC;
}

loc_801AA8D8:
{
    MemoryInline::FlatWrite32((r5 + 736), r4);
}

loc_801AA8DC:
{
    r0 = 32;
    r3 = MemoryInline::FlatRead32((r29 + 732));
    MemoryInline::FlatWrite32((r29 + 720), r0);
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_801AA8F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801AA8FC;
    }
}

loc_801AA8F4:
{
    MemoryInline::FlatWrite32(r3, r29);
    goto loc_801AA900;
}

loc_801AA8FC:
{
    MemoryInline::FlatWrite32((r4 + 736), r29);
}

loc_801AA900:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 740), r4);
    r3 = MemoryInline::FlatRead32((r29 + 732));
    MemoryInline::FlatWrite32((r29 + 736), r0);
    MemoryInline::FlatWrite32((r3 + 4), r29);
    r3 = MemoryInline::FlatRead32((r29 + 752));
}

loc_801AA91C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801AA97C;
    }
}

loc_801AA920:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_801AA924:
{
    r0 = MemoryInline::FlatRead32((r3 + 716));
}

loc_801AA92C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_801AA97C;
    }
}

loc_801AA930:
{
    r4 = MemoryInline::FlatRead32((r3 + 724));
    r5 = MemoryInline::FlatRead32((r3 + 756));
    goto loc_801AA95C;
}

loc_801AA93C:
{
    r6 = MemoryInline::FlatRead32(r5);
}

loc_801AA944:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801AA958;
    }
}

loc_801AA948:
{
    r0 = MemoryInline::FlatRead32((r6 + 720));
}

loc_801AA950:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_801AA958;
    }
}

loc_801AA954:
{
    r4 = r0;
}

loc_801AA958:
{
    r5 = MemoryInline::FlatRead32((r5 + 16));
}

loc_801AA95C:
{
}

loc_801AA960:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_801AA93C;
    }
}

loc_801AA964:
{
    r0 = MemoryInline::FlatRead32((r3 + 720));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_801AA96C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AA97C;
    }
}

loc_801AA970:
{
    ctx->lr = 0x801AA974u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A9A04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801AA978:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AA924;
    }
}

loc_801AA97C:
{
    r0 = MemoryInline::FlatRead32((r13 + -25316));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AA984:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AA990;
    }
}

loc_801AA988:
{
    r3 = 0;
    ctx->lr = 0x801AA990u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A9C08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801AA990:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801AA824 func_801AA824 preserves=true fpr_mask=0x00000000
