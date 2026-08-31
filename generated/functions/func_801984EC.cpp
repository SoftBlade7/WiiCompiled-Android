#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801984EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801984EC;

loc_801984EC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r4 = 0x80340000u;
    r27 = r3;
    r3 = (r4 + 27904);
    ctx->lr = 0x80198510u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7EE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = 0x80340000u;
    r30 = 0;
    r28 = (r31 + 27888);
    goto loc_801985F8;
}

loc_80198520:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_80198528:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r27))) {
        goto loc_801985F8;
    }
}

loc_8019852C:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_80198534:
{
    if ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r0))) {
        goto loc_801985F8;
    }
}

loc_80198538:
{
    r31 = 0;
    goto loc_801985C8;
}

loc_80198540:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_80198548:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r27))) {
        goto loc_801985C8;
    }
}

loc_8019854C:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_80198554:
{
    if ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r0))) {
        goto loc_801985C8;
    }
}

loc_80198558:
{
    r29 = 0;
    goto loc_80198598;
}

loc_80198560:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_80198568:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r27))) {
        goto loc_80198598;
    }
}

loc_8019856C:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r0));
}

loc_80198574:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80198598;
    }
}

loc_80198578:
{
    r4 = r27;
    r3 = (r3 + 12);
    ctx->lr = 0x80198584u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801981ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80198588:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80198590;
    }
}

loc_8019858C:
{
    goto loc_801985B4;
}

loc_80198590:
{
    r3 = r29;
    goto loc_801985B4;
}

loc_80198598:
{
    r4 = r29;
    r3 = (r31 + 12);
    // inline leaf 0x80199CE4 (8 guest instruction(s))
}

loc_inl1_0x80199CE4:
{
}

loc_inl1_0x80199CE8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x80199CF4;
    }
}

loc_inl1_0x80199CEC:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_80199CE4;
}

loc_inl1_0x80199CF4:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_80199CE4:
{
    // end of inlined leaf 0x80199CE4
}

loc_801985A8:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80198560;
    }
}

loc_801985B0:
{
    r3 = 0;
}

loc_801985B4:
{
}

loc_801985B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801985C0;
    }
}

loc_801985BC:
{
    goto loc_801985E4;
}

loc_801985C0:
{
    r3 = r31;
    goto loc_801985E4;
}

loc_801985C8:
{
    r4 = r31;
    r3 = (r30 + 12);
    // inline leaf 0x80199CE4 (8 guest instruction(s))
}

loc_inl2_0x80199CE4:
{
}

loc_inl2_0x80199CE8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x80199CF4;
    }
}

loc_inl2_0x80199CEC:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl2_cont_80199CE4;
}

loc_inl2_0x80199CF4:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_80199CE4:
{
    // end of inlined leaf 0x80199CE4
}

loc_801985D8:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80198540;
    }
}

loc_801985E0:
{
    r3 = 0;
}

loc_801985E4:
{
}

loc_801985E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801985F0;
    }
}

loc_801985EC:
{
    goto loc_80198614;
}

loc_801985F0:
{
    r3 = r30;
    goto loc_80198614;
}

loc_801985F8:
{
    r4 = r30;
    r3 = (r31 + 27888);
    // inline leaf 0x80199CE4 (8 guest instruction(s))
}

loc_inl3_0x80199CE4:
{
}

loc_inl3_0x80199CE8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x80199CF4;
    }
}

loc_inl3_0x80199CEC:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl3_cont_80199CE4;
}

loc_inl3_0x80199CF4:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl3_cont_80199CE4:
{
    // end of inlined leaf 0x80199CE4
}

loc_80198608:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80198520;
    }
}

loc_80198610:
{
    r3 = 0;
}

loc_80198614:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80198618:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80198620;
    }
}

loc_8019861C:
{
    r28 = (r3 + 12);
}

loc_80198620:
{
    r3 = r28;
    r4 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199C78u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = 0x80340000u;
    r3 = (r3 + 27904);
    ctx->lr = 0x80198638u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    r11 = (r1 + 32);
    MemoryInline::FlatWrite32(r27, r0);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801984EC func_801984EC preserves=true fpr_mask=0x00000000
