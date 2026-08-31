#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805CE79C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805CE79C;

loc_805CE79C:
{
}

loc_805CE7A0:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_805CE8F0;
    }
}

loc_805CE7A4:
{
    r0 = MemoryInline::FlatRead16((r20 + 6));
}

loc_805CE7AC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9))) {
        goto loc_805CE8F0;
    }
}

loc_805CE7B0:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 262140);
    r3 = MemoryInline::FlatRead32((r28 + 7736));
    r4 = (r17 + r0);
    r21 = MemoryInline::FlatRead32((r4 + 120));
    r3 = (r3 + 52);
    r4 = r21;
    // inline leaf 0x8061B358 (8 guest instruction(s))
}

loc_inl0_0x8061B358:
{
}

loc_inl0_0x8061B35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl0_0x8061B368;
    }
}

loc_inl0_0x8061B360:
{
    r3 = 0;
    goto loc_inl0_cont_8061B358;
}

loc_inl0_0x8061B368:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_cont_8061B358:
{
    // end of inlined leaf 0x8061B358
    r0 = MemoryInline::FlatRead16((r20 + 4));
}

loc_805CE7D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(21))) {
        goto loc_805CE7E4;
    }
}

loc_805CE7D8:
{
}

loc_805CE7DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(23))) {
        goto loc_805CE834;
    }
}

loc_805CE7E0:
{
    goto loc_805CE8C8;
}

loc_805CE7E4:
{
    r0 = (r3 & 15);
}

loc_805CE7EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805CE80C;
    }
}

loc_805CE7F0:
{
}

loc_805CE7F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805CE814;
    }
}

loc_805CE7F8:
{
}

loc_805CE7FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_805CE81C;
    }
}

loc_805CE800:
{
}

loc_805CE804:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_805CE824;
    }
}

loc_805CE808:
{
    goto loc_805CE82C;
}

loc_805CE80C:
{
    r18 = (r29 + -4092);
    goto loc_805CE8C8;
}

loc_805CE814:
{
    r18 = (r29 + -4088);
    goto loc_805CE8C8;
}

loc_805CE81C:
{
    r18 = (r29 + -4086);
    goto loc_805CE8C8;
}

loc_805CE824:
{
    r18 = (r29 + -4084);
    goto loc_805CE8C8;
}

loc_805CE82C:
{
    r18 = (r29 + -4082);
    goto loc_805CE8C8;
}

loc_805CE834:
{
    r0 = (r3 & 15);
}

loc_805CE83C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805CE85C;
    }
}

loc_805CE840:
{
}

loc_805CE844:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805CE8AC;
    }
}

loc_805CE848:
{
}

loc_805CE84C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_805CE8B4;
    }
}

loc_805CE850:
{
}

loc_805CE854:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_805CE8BC;
    }
}

loc_805CE858:
{
    goto loc_805CE8C4;
}

loc_805CE85C:
{
    r3 = MemoryInline::FlatRead32((r28 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80622EA0 (10 guest instruction(s))
}

loc_inl1_0x80622EA0:
{
    r4 = MemoryInline::FlatRead32((r3 + 892));
}

loc_inl1_0x80622EA8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(1))) {
        goto loc_inl1_0x80622EB4;
    }
}

loc_inl1_0x80622EAC:
{
    r3 = 0;
    goto loc_inl1_cont_80622EA0;
}

loc_inl1_0x80622EB4:
{
    r0 = (r4 + -1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 852));
}

loc_inl1_cont_80622EA0:
{
    // end of inlined leaf 0x80622EA0
}

loc_805CE86C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805CE8A4;
    }
}

loc_805CE870:
{
    r3 = MemoryInline::FlatRead32((r28 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80622EA0 (10 guest instruction(s))
}

loc_inl2_0x80622EA0:
{
    r4 = MemoryInline::FlatRead32((r3 + 892));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_inl2_0x80622EA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl2_0x80622EB4;
    }
}

loc_inl2_0x80622EAC:
{
    r3 = 0;
    goto loc_inl2_cont_80622EA0;
}

loc_inl2_0x80622EB4:
{
    r0 = (r4 + -1);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 852));
}

loc_inl2_cont_80622EA0:
{
    // end of inlined leaf 0x80622EA0
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r4 = r21;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x805CE894u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[18] = r18;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r25 = ctx->gpr[25];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805CE898:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805CE8A4;
    }
}

loc_805CE89C:
{
    r18 = (r29 + -4031);
    goto loc_805CE8C8;
}

loc_805CE8A4:
{
    r18 = (r29 + -4029);
    goto loc_805CE8C8;
}

loc_805CE8AC:
{
    r18 = (r29 + -4031);
    goto loc_805CE8C8;
}

loc_805CE8B4:
{
    r18 = (r29 + -4016);
    goto loc_805CE8C8;
}

loc_805CE8BC:
{
    r18 = (r29 + -4008);
    goto loc_805CE8C8;
}

loc_805CE8C4:
{
    r18 = (r29 + -4031);
}

loc_805CE8C8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r18));
    r21 = (r1 + 48);
    MemoryInline::FlatWriteRam16((r1 + 50), static_cast<uint16_t>(r0));
    goto loc_805CE8F0;
}

loc_805CE8DC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(32));
}

loc_805CE8E0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805CE8EC;
    }
}

loc_805CE8E4:
{
    r3 = MemoryInline::FlatRead32((r25 + 7136));
    ctx->lr = 0x805CE8ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[18] = r18;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805D00B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r25 = ctx->gpr[25];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805CE8EC:
{
    r21 = (r21 + 2);
}

loc_805CE8F0:
{
    r4 = MemoryInline::FlatRead16(r21);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805CE8F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805CE8DC;
    }
}

loc_805CE8FC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[18] = r18;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805CDF28u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r25 = ctx->gpr[25];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[18] = r18;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805CE79C func_805CE79C preserves=true fpr_mask=0x00000000
