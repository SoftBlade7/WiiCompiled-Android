#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807036CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807036CC;

loc_807036CC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 156), 0, 96u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r3 + 177));
}

loc_807036F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80703710;
    }
}

loc_807036F4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 156));
}

loc_807036FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(242))) {
        goto loc_80703710;
    }
}

loc_80703700:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(369));
}

loc_80703704:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703710;
    }
}

loc_80703708:
{
    r3 = 0;
    goto loc_80703AB0;
}

loc_80703710:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 156));
}

loc_80703718:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(205))) {
        goto loc_80703738;
    }
}

loc_8070371C:
{
}

loc_80703720:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(402))) {
        goto loc_80703784;
    }
}

loc_80703724:
{
}

loc_80703728:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(242))) {
        goto loc_807037E0;
    }
}

loc_8070372C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(403));
}

loc_80703730:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807039D8;
    }
}

loc_80703734:
{
    goto loc_80703AA4;
}

loc_80703738:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(574));
}

loc_8070373C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703AA4;
    }
}

loc_80703740:
{
    r4 = 1431633920;
    r5 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 164));
    r0 = (r4 + 21846);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_17 & 1);
    r0 = (r4 + r0);
    r0 = (r0 * 3);
    r0 = (r5 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80703764:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703770;
    }
}

loc_80703768:
{
    r3 = 0;
    goto loc_80703AB0;
}

loc_80703770:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80703778:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703AA4;
    }
}

loc_8070377C:
{
    r3 = 0;
    goto loc_80703AB0;
}

loc_80703784:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(618));
}

loc_80703788:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703AA4;
    }
}

loc_8070378C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703794:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703AA4;
    }
}

loc_80703798:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807037A4;
    }
}

loc_8070379C:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807037A8;
}

loc_807037A4:
{
    r0 = -1;
}

loc_807037A8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(617));
}

loc_807037AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807037BC;
    }
}

loc_807037B0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(618));
}

loc_807037B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807037D8;
    }
}

loc_807037B8:
{
    goto loc_80703AA4;
}

loc_807037BC:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 308));
    ctr = r12;
    ctx->lr = 0x807037D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80703AA4;
}

loc_807037D8:
{
    r3 = 0;
    goto loc_80703AB0;
}

loc_807037E0:
{
}

loc_807037E4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(623))) {
        goto loc_80703804;
    }
}

loc_807037E8:
{
}

loc_807037EC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(622))) {
        goto loc_807038C0;
    }
}

loc_807037F0:
{
}

loc_807037F4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(624))) {
        goto loc_80703948;
    }
}

loc_807037F8:
{
}

loc_807037FC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(626))) {
        goto loc_80703988;
    }
}

loc_80703800:
{
    goto loc_807039D8;
}

loc_80703804:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070380C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703818;
    }
}

loc_80703810:
{
    r0 = 0;
    goto loc_80703834;
}

loc_80703818:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703824;
    }
}

loc_8070381C:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80703828;
}

loc_80703824:
{
    r0 = -1;
}

loc_80703828:
{
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_9 & 134217727);
}

loc_80703834:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80703838:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703844;
    }
}

loc_8070383C:
{
    r3 = 0;
    goto loc_80703AB0;
}

loc_80703844:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703848:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703854;
    }
}

loc_8070384C:
{
    r0 = 0;
    goto loc_80703870;
}

loc_80703854:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703860;
    }
}

loc_80703858:
{
    r4 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80703864;
}

loc_80703860:
{
    r4 = -1;
}

loc_80703864:
{
    r0 = (r4 + -622);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_11 & 134217727);
}

loc_80703870:
{
}

loc_80703874:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807038AC;
    }
}

loc_80703878:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070387C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703888;
    }
}

loc_80703880:
{
    r0 = 0;
    goto loc_807038A4;
}

loc_80703888:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703894;
    }
}

loc_8070388C:
{
    r4 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80703898;
}

loc_80703894:
{
    r4 = -1;
}

loc_80703898:
{
    r0 = (r4 + -624);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_13 & 134217727);
}

loc_807038A4:
{
}

loc_807038A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807039D8;
    }
}

loc_807038AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807038B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807039D8;
    }
}

loc_807038B4:
{
    r4 = 0;
    ctx->lr = 0x807038BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807039D8;
}

loc_807038C0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807038C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807038D4;
    }
}

loc_807038CC:
{
    r0 = 0;
    goto loc_807038F0;
}

loc_807038D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807038E0;
    }
}

loc_807038D8:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807038E4;
}

loc_807038E0:
{
    r0 = -1;
}

loc_807038E4:
{
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 134217727);
}

loc_807038F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807038F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703900;
    }
}

loc_807038F8:
{
    r3 = 0;
    goto loc_80703AB0;
}

loc_80703900:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703904:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703910;
    }
}

loc_80703908:
{
    r0 = 0;
    goto loc_8070392C;
}

loc_80703910:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070391C;
    }
}

loc_80703914:
{
    r4 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80703920;
}

loc_8070391C:
{
    r4 = -1;
}

loc_80703920:
{
    r0 = (r4 + -624);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_7 & 134217727);
}

loc_8070392C:
{
}

loc_80703930:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807039D8;
    }
}

loc_80703934:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703938:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807039D8;
    }
}

loc_8070393C:
{
    r4 = 0;
    ctx->lr = 0x80703944u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807039D8;
}

loc_80703948:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703950:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070395C;
    }
}

loc_80703954:
{
    r0 = 0;
    goto loc_80703978;
}

loc_8070395C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703968;
    }
}

loc_80703960:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070396C;
}

loc_80703968:
{
    r0 = -1;
}

loc_8070396C:
{
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
}

loc_80703978:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8070397C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807039D8;
    }
}

loc_80703980:
{
    r3 = 0;
    goto loc_80703AB0;
}

loc_80703988:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703990:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070399C;
    }
}

loc_80703994:
{
    r0 = 0;
    goto loc_807039B8;
}

loc_8070399C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807039A8;
    }
}

loc_807039A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807039AC;
}

loc_807039A8:
{
    r0 = -1;
}

loc_807039AC:
{
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_807039B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807039BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807039C8;
    }
}

loc_807039C0:
{
    r3 = 0;
    goto loc_80703AB0;
}

loc_807039C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807039CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807039D8;
    }
}

loc_807039D0:
{
    r4 = 0;
    ctx->lr = 0x807039D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807039D8:
{
    r0 = (r31 + -658);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_807039E0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80703AA4;
    }
}

loc_807039E4:
{
    r4 = MemoryInline::FlatRead32((r30 + 128));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807039F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703A14;
    }
}

loc_807039F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703A00;
    }
}

loc_807039F8:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80703A04;
}

loc_80703A00:
{
    r0 = -1;
}

loc_80703A04:
{
}

loc_80703A08:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80703A14;
    }
}

loc_80703A0C:
{
    r3 = (r30 + 128);
    goto loc_80703A94;
}

loc_80703A14:
{
    r4 = MemoryInline::FlatRead32((r30 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80703A1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703A40;
    }
}

loc_80703A20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703A2C;
    }
}

loc_80703A24:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80703A30;
}

loc_80703A2C:
{
    r0 = -1;
}

loc_80703A30:
{
}

loc_80703A34:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80703A40;
    }
}

loc_80703A38:
{
    r3 = (r30 + 132);
    goto loc_80703A94;
}

loc_80703A40:
{
    r4 = MemoryInline::FlatRead32((r30 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80703A48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703A6C;
    }
}

loc_80703A4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703A58;
    }
}

loc_80703A50:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80703A5C;
}

loc_80703A58:
{
    r0 = -1;
}

loc_80703A5C:
{
}

loc_80703A60:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80703A6C;
    }
}

loc_80703A64:
{
    r3 = (r30 + 136);
    goto loc_80703A94;
}

loc_80703A6C:
{
    r4 = MemoryInline::FlatRead32((r30 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80703A74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703A94;
    }
}

loc_80703A78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703A84;
    }
}

loc_80703A7C:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80703A88;
}

loc_80703A84:
{
    r0 = -1;
}

loc_80703A88:
{
}

loc_80703A8C:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80703A94;
    }
}

loc_80703A90:
{
    r3 = (r30 + 140);
}

loc_80703A94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80703A98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703AA4;
    }
}

loc_80703A9C:
{
    r3 = 0;
    goto loc_80703AB0;
}

loc_80703AA4:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x80703AB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80701140u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80703AB0:
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807036CC func_807036CC preserves=true fpr_mask=0x00000000
