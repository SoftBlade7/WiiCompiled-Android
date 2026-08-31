#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015EA1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015EA1C;

loc_8015EA1C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0 = MemoryInline::FlatRead32((r13 + -25952));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015EA38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015EB58;
    }
}

loc_8015EA3C:
{
    r3 = MemoryInline::FlatRead32((r13 + -29496));
    ctx->lr = 0x8015EA44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A0504u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -25952), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80164848u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -25512));
}

loc_8015EA58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015EAB8;
    }
}

loc_8015EA5C:
{
    r3 = 0x80000000u;
    r0 = MemoryInline::FlatRead8((r3 + 12679));
}

loc_8015EA68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(128))) {
        goto loc_8015EAB8;
    }
}

loc_8015EA6C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801671D0u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015EA74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015EA88;
    }
}

loc_8015EA78:
{
    r4 = 0x80340000u;
    r3 = 0;
    r4 = (r4 + -6784);
    ctx->lr = 0x8015EA88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016765Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8015EA88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015EA8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015EA9C;
    }
}

loc_8015EA90:
{
    r3 = 0;
    r4 = (r13 + -25920);
    ctx->lr = 0x8015EA9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80167700u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8015EA9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015EAA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015EAB4;
    }
}

loc_8015EAA4:
{
    r3 = 0x80340000u;
    r4 = (r13 + -25920);
    r3 = (r3 + -6528);
    ctx->lr = 0x8015EAB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80167700u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8015EAB4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80167224u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8015EAB8:
{
    // inline leaf 0x8015DF1C (12 guest instruction(s))
}

loc_inl0_0x8015DF1C:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWrite32((r13 + -26044), r3);
    r4 = MemoryInline::FlatRead32((r3 + 56));
}

loc_inl0_0x8015DF2C:
{
    MemoryInline::FlatWrite32((r13 + -26048), r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8015DF34:
{
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 * 12);
    MemoryInline::FlatWrite32((r13 + -26056), r3);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r13 + -26052), r0);
    goto loc_inl0_cont_8015DF1C;
}

loc_inl0_return:
{
}

loc_inl0_cont_8015DF1C:
{
    // end of inlined leaf 0x8015DF1C
    // inline leaf 0x801635C0 (14 guest instruction(s))
    r6 = 0x80340000u;
    r6 = (r6 + 12848);
    r5 = (r6 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r6, r6);
    r4 = (r6 + 16);
    r3 = (r6 + 24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r6 + 4), r6);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r6 + 8), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r6 + 12), r5);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r6 + 16), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r6 + 20), r4);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r6 + 24), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r6 + 28), r3);
    // end of inlined leaf 0x801635C0
    r0 = 0x80000000u;
    r3 = 0;
    MemoryInline::FlatWrite32((r13 + -25904), r3);
    r3 = (r13 + -26064);
    MemoryInline::FlatWrite32((r13 + -25880), r0);
    MemoryInline::FlatWrite32((r13 + -25876), r0);
    // inline leaf 0x801A98A0 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x801A98A0
    // inline leaf 0x80166954 (2 guest instruction(s))
    r3 = 1;
    // end of inlined leaf 0x80166954
    // inline leaf 0x8016695C (2 guest instruction(s))
    r3 = 1;
    // end of inlined leaf 0x8016695C
    r3 = MemoryInline::FlatRead32((r13 + -25880));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r3 + 450887680);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(31778));
}

loc_8015EAF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015EB0C;
    }
}

loc_8015EAF8:
{
    r0 = (r3 + -219480064);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(59998));
}

loc_8015EB00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015EB0C;
    }
}

loc_8015EB04:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -25984), r0);
}

loc_8015EB0C:
{
    r31 = 0x80340000u;
    r4 = 0;
    r3 = (r31 + 13248);
    r5 = 128;
    ctx->lr = 0x8015EB20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = 0x80000000u;
    r3 = (r31 + 13248);
    r4 = r30;
    r5 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r30 + 6));
    r5 = (r31 + 13248);
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWriteRam8((r5 + 4), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r30 + 7));
    MemoryInline::FlatWriteRam8((r5 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r13 + -25956), r0);
    ctx->lr = 0x8015EB58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80164364u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8015EB58:
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
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8015EA1C func_8015EA1C preserves=true fpr_mask=0x00000000
