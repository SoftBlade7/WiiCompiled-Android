#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019832C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8019832C;

loc_8019832C:
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
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    r0_mrot_0 = (r7 & 255);
    r0_mdest_0 = (r0 & -256);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r27 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r5);
    r4 = 4;
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r6);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r0);
    r3 = (r3 + 12);
    // inline leaf 0x80199BF0 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r3 + 10), static_cast<uint16_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 4), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 8), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80199BF0
    r0 = MemoryInline::FlatRead32((r13 + -25544));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80198370:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80198398;
    }
}

loc_80198374:
{
    r3 = 0x80340000u;
    r4 = 4;
    r3 = (r3 + 27888);
    // inline leaf 0x80199BF0 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam32(r3, r0);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80199BF0
    r3 = 0x80340000u;
    r3 = (r3 + 27904);
    ctx->lr = 0x80198390u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x801A7EACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -25544), r0);
}

loc_80198398:
{
    r3 = (r27 + 32);
    ctx->lr = 0x801983A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x801A7EACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    r3 = 0x80340000u;
    r3 = (r3 + 27904);
    ctx->lr = 0x801983ACu;
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
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    goto loc_80198494;
}

loc_801983BC:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_801983C4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r27))) {
        goto loc_80198494;
    }
}

loc_801983C8:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_801983D0:
{
    if ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r0))) {
        goto loc_80198494;
    }
}

loc_801983D4:
{
    r31 = 0;
    goto loc_80198464;
}

loc_801983DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_801983E4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r27))) {
        goto loc_80198464;
    }
}

loc_801983E8:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_801983F0:
{
    if ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r0))) {
        goto loc_80198464;
    }
}

loc_801983F4:
{
    r29 = 0;
    goto loc_80198434;
}

loc_801983FC:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_80198404:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r27))) {
        goto loc_80198434;
    }
}

loc_80198408:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r0));
}

loc_80198410:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80198434;
    }
}

loc_80198414:
{
    r4 = r27;
    r3 = (r3 + 12);
    ctx->lr = 0x80198420u;
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

loc_80198424:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8019842C;
    }
}

loc_80198428:
{
    goto loc_80198450;
}

loc_8019842C:
{
    r3 = r29;
    goto loc_80198450;
}

loc_80198434:
{
    r4 = r29;
    r3 = (r31 + 12);
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

loc_80198444:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801983FC;
    }
}

loc_8019844C:
{
    r3 = 0;
}

loc_80198450:
{
}

loc_80198454:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8019845C;
    }
}

loc_80198458:
{
    goto loc_80198480;
}

loc_8019845C:
{
    r3 = r31;
    goto loc_80198480;
}

loc_80198464:
{
    r4 = r31;
    r3 = (r30 + 12);
    // inline leaf 0x80199CE4 (8 guest instruction(s))
}

loc_inl4_0x80199CE4:
{
}

loc_inl4_0x80199CE8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x80199CF4;
    }
}

loc_inl4_0x80199CEC:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl4_cont_80199CE4;
}

loc_inl4_0x80199CF4:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl4_cont_80199CE4:
{
    // end of inlined leaf 0x80199CE4
}

loc_80198474:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801983DC;
    }
}

loc_8019847C:
{
    r3 = 0;
}

loc_80198480:
{
}

loc_80198484:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8019848C;
    }
}

loc_80198488:
{
    goto loc_801984B0;
}

loc_8019848C:
{
    r3 = r30;
    goto loc_801984B0;
}

loc_80198494:
{
    r4 = r30;
    r3 = (r31 + 27888);
    // inline leaf 0x80199CE4 (8 guest instruction(s))
}

loc_inl5_0x80199CE4:
{
}

loc_inl5_0x80199CE8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x80199CF4;
    }
}

loc_inl5_0x80199CEC:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl5_cont_80199CE4;
}

loc_inl5_0x80199CF4:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl5_cont_80199CE4:
{
    // end of inlined leaf 0x80199CE4
}

loc_801984A4:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801983BC;
    }
}

loc_801984AC:
{
    r3 = 0;
}

loc_801984B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801984B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801984BC;
    }
}

loc_801984B8:
{
    r28 = (r3 + 12);
}

loc_801984BC:
{
    r3 = r28;
    r4 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199C08u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r3 = 0x80340000u;
    r3 = (r3 + 27904);
    ctx->lr = 0x801984D4u;
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
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r11 = (r1 + 32);
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
// RECOMP_REGISTRATION base 0x8019832C func_8019832C preserves=true fpr_mask=0x00000000
